<%@page import="model.BoardDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	request.setCharacterEncoding("euc-kr");
%>
	
	<!-- 게시글 작성한 데이터를 한번에 읽어들임 -->
	<jsp:useBean id="boardbean" class="model.BoardBean">
		<jsp:setProperty name="boardbean" property="*" />
	</jsp:useBean>
	
<%
	//데이터베이스 쪽으로 bean클래스를 넘겨줌
	BoardDAO bDAO = new BoardDAO();
	bDAO.insertBoard(boardbean);
		
	response.sendRedirect("BoardList.jsp");
%>

</body>
</html>