<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
<!DOCTYPE html>
<html>

<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>

<body>

	<h2> 1-10까지 숫자를 화면에 표시</h2>

	<%
		for(int i=0; i<10; i++) {
	%>
		<%=i+1%><br>
	<%
		}
	%>

</body>
</html>