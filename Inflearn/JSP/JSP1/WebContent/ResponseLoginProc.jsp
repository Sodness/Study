<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

<%
	request.setCharacterEncoding("EUC-KR");

	String dbid = "aaaa";
	String dbpw = "1234";
	
	String id = request.getParameter("id");
	String pw = request.getParameter("pw");
	
	if(dbid.equals(id) && dbpw.equals(pw)) {
		response.sendRedirect("ResponseMain.jsp?id="+id);
	}else {
%>
	<script>
		alert("���̵�� �н����尡 ��ġ ���� �ʽ��ϴ�.");
		history.go(-1);
	</script>
<%
	}
%>

</body>
</html>