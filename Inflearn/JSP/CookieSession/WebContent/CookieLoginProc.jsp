<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	request.setCharacterEncoding("euc-kr");
	
	String id = request.getParameter("id");
	String save = request.getParameter("save");
	
	if(save != null) {
		Cookie cookie = new Cookie("id", id); //(키값, value 값)
		cookie.setMaxAge(60 * 2); //10분간 유효
		response.addCookie(cookie);
		
		out.write("쿠키 저장완료");
	}
	

%>

</body>
</html>