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

	// ��� �κ��� ������ �о�鿩 �ٽ� ��Ŭ������ ����
	String [] hobby = request.getParameterValues("hobby");
	String textHobby = "";
	for(int i=0; i<hobby.length; i++) {
		textHobby = textHobby + hobby[i] + " ";
	}
%>

	<!-- useBean�� �̿��Ͽ� �����͸� �Ѳ����� �޾ƿ� -->
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