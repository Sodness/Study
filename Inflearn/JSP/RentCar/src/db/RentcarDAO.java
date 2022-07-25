package db;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Vector;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.naming.NamingException;
import javax.sql.DataSource;

public class RentcarDAO {
	Connection con;
	PreparedStatement pstmt;
	ResultSet rs;
	
	public void getCon() {
		try {
			Context initctx = new InitialContext();
			Context envctx = (Context) initctx.lookup("java:comp/env");
			DataSource ds = (DataSource) envctx.lookup("jdbc/pool");
			con = ds.getConnection();
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public Vector<CarListBean> getSelectCar() {
		Vector<CarListBean> v = new Vector<>();
		try {
			getCon();
			String sql = "select * from rentcar order by no desc";
			pstmt = con.prepareStatement(sql);
			rs = pstmt.executeQuery();
			int cnt = 0;
			while(rs.next()) {
				CarListBean bean = new CarListBean();
				if(cnt !=0 ) {
					bean.setNo(rs.getInt(1));
					bean.setName(rs.getString(2));
					bean.setCategory(rs.getInt(3));
					bean.setPrice(rs.getInt(4));
					bean.setUsepeople(rs.getInt(5));
					bean.setCompany(rs.getString(6));
					bean.setImg(rs.getString(7));
					bean.setInfo(rs.getString(8));
					
					v.add(bean);
				}
				cnt++;
				if(cnt > 3) { break; }
			}
			con.close();
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		
		return v;
	}
	
	public Vector<CarListBean> getCategoryCar(int category) {
		Vector<CarListBean> v = new Vector<>();
		try {
			getCon();
			String sql = "select * from rentcar where category=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setInt(1, category);
			rs = pstmt.executeQuery();
			while(rs.next()) {
				CarListBean bean = new CarListBean();
				bean.setNo(rs.getInt(1));
				bean.setName(rs.getString(2));
				bean.setCategory(rs.getInt(3));
				bean.setPrice(rs.getInt(4));
				bean.setUsepeople(rs.getInt(5));
				bean.setCompany(rs.getString(6));
				bean.setImg(rs.getString(7));
				bean.setInfo(rs.getString(8));
				
				v.add(bean);
			}
			con.close();
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		
		return v;
	}
	
	public Vector<CarListBean> getAllCar() {
		Vector<CarListBean> v = new Vector<>();
		try {
			getCon();
			String sql = "select * from rentcar";
			pstmt = con.prepareStatement(sql);
			rs = pstmt.executeQuery();
			while(rs.next()) {
				CarListBean bean = new CarListBean();
				bean.setNo(rs.getInt(1));
				bean.setName(rs.getString(2));
				bean.setCategory(rs.getInt(3));
				bean.setPrice(rs.getInt(4));
				bean.setUsepeople(rs.getInt(5));
				bean.setCompany(rs.getString(6));
				bean.setImg(rs.getString(7));
				bean.setInfo(rs.getString(8));
				
				v.add(bean);
			}
			con.close();
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		
		
		return v;
	}
	
	public CarListBean getOneCar(int no) {
		CarListBean bean = new CarListBean();
		try {
			getCon();
			String sql = "select * from rentcar where no=?";
			pstmt = con.prepareStatement(sql);
			pstmt.setInt(1, no);
			rs = pstmt.executeQuery();
			if(rs.next()) {
				bean.setNo(rs.getInt(1));
				bean.setName(rs.getString(2));
				bean.setCategory(rs.getInt(3));
				bean.setPrice(rs.getInt(4));
				bean.setUsepeople(rs.getInt(5));
				bean.setCompany(rs.getString(6));
				bean.setImg(rs.getString(7));
				bean.setInfo(rs.getString(8));
			}
			con.close();
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		
		return bean;
	}
}
