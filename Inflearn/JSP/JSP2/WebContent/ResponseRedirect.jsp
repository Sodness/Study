<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<h2>ResponseRedirect.jsp �������Դϴ�.</h2>
	
	<%
		request.setCharacterEncoding("EUC-KR");
	
		String id = request.getParameter("id");
		String tel = request.getParameter("tel");
	%>
	
	<h3>���̵� = <%= id %></h3>
	<h3>��ȭ��ȣ = <%= tel %></h3>

</body>
</html>