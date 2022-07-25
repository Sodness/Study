<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

<%
	String id = request.getParameter("id");
	String pw = request.getParameter("pw");
%>

	<h2>
	당신의 아이디는 <%=id%> 이고 패스워드는 <%=pw%> 입니다.
	</h2>

</body>
</html>