<%@page import="model.BoardDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>
<%
	String pass = request.getParameter("password");
	int num = Integer.parseInt(request.getParameter("num"));
	
	BoardDAO bDAO = new BoardDAO();
	String password = bDAO.getPass(num);
	
	if(pass.equals(password)) {
		bDAO.deleteBoard(num);
		response.sendRedirect("BoardList.jsp");
	}else {
%>
		<script>
			alert("�н����尡 Ʋ���� ���� �� �� �����ϴ�. �н����带 Ȯ�����ּ���");
			history.go(-1);
		</script>
<%
	}
%>




</body>
</html>