<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<h2>ResponseRedirect.jsp 페이지입니다.</h2>
	
	<%
		request.setCharacterEncoding("EUC-KR");
	
		String id = request.getParameter("id");
		String tel = request.getParameter("tel");
	%>
	
	<h3>아이디 = <%= id %></h3>
	<h3>전화번호 = <%= tel %></h3>

</body>
</html>