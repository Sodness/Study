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
			alert("패스워드가 일치 하지 않습니다. 다시 확인후 수정해주세요");
			history.go(-1);
		</script>
<%
	}
%>

</body>
</html>