<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<center>
	<h2> ���� �α��� ó�� 1 </h2>
	<%
		request.setCharacterEncoding("euc-kr");
		
		//����ڷκ��� �����͸� �о����
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		
		//���̵�� �н����带 ����
		session.setAttribute("id", id);
		session.setAttribute("pw", pw);
		session.setMaxInactiveInterval(60*2);
		
		response.sendRedirect("SessionMain.jsp");
	%>
	</center>

</body>
</html>