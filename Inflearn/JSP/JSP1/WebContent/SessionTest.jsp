<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

	<h2>���� ����</h2>

<%
	String name = "shin";
	
	session.setAttribute("name1", name);
	session.setMaxInactiveInterval(10);
%>

	<a href="SessionName.jsp">���ǳ��� �������� �̵�</a>

</body>
</html>