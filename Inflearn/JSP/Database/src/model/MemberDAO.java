package model;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Vector;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

//오라클 데이터베이스에 연결하고 select, insert, update, delete 작업을 실행해주는 클래스입니다.
public class MemberDAO {
	/*
	 * String id = "system"; String pw = "tiger"; String url =
	 * "jdbc:oracle:thin:@localhost:1521:orcl";
	 */
	
	Connection con;
	PreparedStatement pstmt;
	ResultSet rs;
	
	public void getCon() {
		//커넥션풀을 이용하여 데이터베이스에 접근
		try {
			//외부에서 데이터를 읽어들여야 하기에
			Context initctx = new InitialContext();
			//톰켓 서버에 정보를 담아놓은 곳으로 이동
			Context envctx = (Context) initctx.lookup("java:comp/env");
			//데이터 소스 객체를 선언
			DataSource ds = (DataSource) envctx.lookup("jdbc/pool");
			//데이터 소스를 기준으로 커넥션을 연결해주시오
			con = ds.getConnection();
		}catch(Exception e) {
			e.printStackTrace();
		}
		
		
		
		/*
		 * try { Class.forName("oracle.jdbc.driver.OracleDriver"); con =
		 * DriverManager.getConnection(url, id, pw); }catch(Exception e) {
		 * e.printStackTrace(); }
		 */
	}
	
	public void insertMember(MemberBean mbean) {
		try {
			getCon();
			String sql = "insert into member values(?, ?, ?, ?, ?, ?, ?, ?)";
			PreparedStatement pstmt = con.prepareStatement(sql);
			pstmt.setString(1, mbean.getId());
			pstmt.setString(2, mbean.getPw1());
			pstmt.setString(3, mbean.getEmail());
			pstmt.setString(4, mbean.getTel());
			pstmt.setString(5, mbean.getHobby());
			pstmt.setString(6, mbean.getJob());
			pstmt.setString(7, mbean.getAge());
			pstmt.setString(8, mbean.getInfo());
			pstmt.executeUpdate();
			
			con.close();
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public Vector<MemberBean> selectAllMember() {
		Vector<MemberBean> v = new Vector<>();
		
		try {
			getCon();
			
			String sql = "select * from member";
			pstmt = con.prepareStatement(sql);
			rs = pstmt.executeQuery();
			
			while(rs.next()) {
				MemberBean bean = new MemberBean();
				bean.setId(rs.getString(1));
				bean.setPw1(rs.getString(2));
				bean.setEmail(rs.getString(3));
				bean.setTel(rs.getString(4));
				bean.setHobby(rs.getString(5));
				bean.setJob(rs.getString(6));
				bean.setAge(rs.getString(7));
				bean.setInfo(rs.getString(8));
				
				v.add(bean);
			}
			con.close();
		} catch(Exception e) {
			
		}
		
		return v;
	}
	
	public MemberBean selectMember(String id) {
		MemberBean bean = new MemberBean();
		
		try {
			getCon();
			String sql = "select * from member where id=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setString(1, id);
			rs = pstmt.executeQuery();
			if(rs.next()) {
				bean.setId(rs.getString(1));
				bean.setPw1(rs.getString(2));
				bean.setEmail(rs.getString(3));
				bean.setTel(rs.getString(4));
				bean.setHobby(rs.getString(5));
				bean.setJob(rs.getString(6));
				bean.setAge(rs.getString(7));
				bean.setInfo(rs.getString(8));
			}
			con.close();
		} catch(Exception e) {
			
		}
		
		return bean;
	}
	
	public String getPw(String id) {
		String pw = "";
		
		try {
			getCon();
			String sql = "select pw1 from member where id=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setString(1, id);
			rs = pstmt.executeQuery();
			if(rs.next()) {
				pw = rs.getString(1);
			}
			con.close();
		} catch(Exception e) {
			
		}
		
		return pw;
	}
	
	public void updateMember(MemberBean bean) {
		try {
			getCon();
			String sql = "update member set email=?, tel=? where id=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setString(1, bean.getEmail());
			pstmt.setString(2, bean.getTel());
			pstmt.setString(3, bean.getId());
			pstmt.executeUpdate();
			
			con.close();
		}catch(Exception e) {
			
		}
	}
	
	public void deleteMember(String id) {
		try {
			getCon();
			String sql = "delete from member where id=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setString(1, id);
			pstmt.executeUpdate();
			
			con.close();
		}catch(Exception e) {
			
		}
	}
}

























