<%@page import="model.BoardDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>
<%
	request.setCharacterEncoding("euc-kr");
%>

<jsp:useBean id="boardbean" class="model.BoardBean">
	<jsp:setProperty name="boardbean" property="*" />
</jsp:useBean>

<%
	BoardDAO bDAO = new BoardDAO();
	String pass = bDAO.getPass(boardbean.getNum());
	
	if(pass.equals(boardbean.getPassword())) {
		bDAO.updateBoard(boardbean);
		response.sendRedirect("BoardList.jsp");
	}else {
%>
		<script>
			alert("�н����尡 ��ġ ���� �ʽ��ϴ�. �ٽ� Ȯ���� �������ּ���");
			history.go(-1);
		</script>
<%
	}
%>

</body>
</html>