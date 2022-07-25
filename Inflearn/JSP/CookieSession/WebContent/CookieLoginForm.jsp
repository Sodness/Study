<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<%
		Cookie[] cookies = request.getCookies();
		String id = "";
	
		if(cookies != null) {
			for(int i=0; i<cookies.length; i++) {
				if(cookies[i].getName().equals("id")) {
					id = cookies[i].getValue();
					break;
				}
			}
		}
	%>


	<center>
	<h2>쿠키 로그인</h2>
	
	<form action="CookieLoginProc.jsp" method="post">
	<table width="400" border="1">
	<tr height="50">
		<td width="150"> 아이디 </td>
		<td width="250"> <input type="text" name="id" value="<%=id%>"> </td>
	</tr>
	<tr height="50">
		<td width="150"> 패스워드 </td>
		<td width="250"> <input type="password" name="pw"> </td>
	</tr>
	<tr height="50">
		<td colspan="2" align="center"> <input type="checkbox" name="save" value="1"> 아이디 저장 </td>
	</tr>
	<tr height="50">
		<td colspan="2" align="center"> <input type="submit" value="로그인"> </td>
	</tr>
	</table>
	</form>
	
	</center>

</body>
</html>