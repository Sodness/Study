<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<h2>이 페이지는 로그인 정보가 넘어오는 페이지입니다.</h2>
	
	<%
		request.setCharacterEncoding("EUC-KR");
	
		String id = request.getParameter("id");
		
		//response.sendRedirect("ResponseRedirect.jsp");
	%>
	
	<jsp:forward page="ResponseRedirect.jsp">
		<jsp:param value="aaaa" name="id"/>
		<jsp:param value="1234" name="tel"/>
	</jsp:forward>
	
	<h3>아이디 = <%= id %></h3>

</body>
</html>