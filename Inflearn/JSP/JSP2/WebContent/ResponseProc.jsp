<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<h2>�� �������� �α��� ������ �Ѿ���� �������Դϴ�.</h2>
	
	<%
		request.setCharacterEncoding("EUC-KR");
	
		String id = request.getParameter("id");
		
		//response.sendRedirect("ResponseRedirect.jsp");
	%>
	
	<jsp:forward page="ResponseRedirect.jsp">
		<jsp:param value="aaaa" name="id"/>
		<jsp:param value="1234" name="tel"/>
	</jsp:forward>
	
	<h3>���̵� = <%= id %></h3>

</body>
</html>