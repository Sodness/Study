<%@page import="model.MemberDAO"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.Connection"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	request.setCharacterEncoding("EUC-KR");

	// 취미 부분은 별도로 읽어들여 다시 빈클래스에 저장
	String [] hobby = request.getParameterValues("hobby");
	String textHobby = "";
	for(int i=0; i<hobby.length; i++) {
		textHobby = textHobby + hobby[i] + " ";
	}
%>

	<!-- useBean을 이용하여 데이터를 한꺼번에 받아옴 -->
	<jsp:useBean id="mbean" class="model.MemberBean">
		<jsp:setProperty name="mbean" property="*" />
	</jsp:useBean>

<%
	mbean.setHobby(textHobby);
	
	MemberDAO mDAO = new MemberDAO();
	mDAO.insertMember(mbean);
	
	response.sendRedirect("MemberList.jsp");
%>

	
	
</body>
</html>