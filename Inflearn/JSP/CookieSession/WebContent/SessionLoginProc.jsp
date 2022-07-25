<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<center>
	<h2> 세션 로그인 처리 1 </h2>
	<%
		request.setCharacterEncoding("euc-kr");
		
		//사용자로부터 데이터를 읽어들임
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		
		//아이디와 패스워드를 저장
		session.setAttribute("id", id);
		session.setAttribute("pw", pw);
		session.setMaxInactiveInterval(60*2);
		
		response.sendRedirect("SessionMain.jsp");
	%>
	</center>

</body>
</html>