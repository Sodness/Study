<%@page import="model.BoardDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	request.setCharacterEncoding("euc-kr");
%>
	
	<!-- �Խñ� �ۼ��� �����͸� �ѹ��� �о���� -->
	<jsp:useBean id="boardbean" class="model.BoardBean">
		<jsp:setProperty name="boardbean" property="*" />
	</jsp:useBean>
	
<%
	//�����ͺ��̽� ������ beanŬ������ �Ѱ���
	BoardDAO bDAO = new BoardDAO();
	bDAO.insertBoard(boardbean);
		
	response.sendRedirect("BoardList.jsp");
%>

</body>
</html>