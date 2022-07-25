<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

	<h2>세션 연습</h2>

<%
	String name = "shin";
	
	session.setAttribute("name1", name);
	session.setMaxInactiveInterval(10);
%>

	<a href="SessionName.jsp">세션네임 페이지로 이동</a>

</body>
</html>