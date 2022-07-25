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
			alert("패스워드가 틀려서 삭제 할 수 없습니다. 패스워드를 확인해주세요");
			history.go(-1);
		</script>
<%
	}
%>




</body>
</html>