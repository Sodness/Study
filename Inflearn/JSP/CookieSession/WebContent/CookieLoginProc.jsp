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
		Cookie cookie = new Cookie("id", id); //(Ű��, value ��)
		cookie.setMaxAge(60 * 2); //10�а� ��ȿ
		response.addCookie(cookie);
		
		out.write("��Ű ����Ϸ�");
	}
	

%>

</body>
</html>