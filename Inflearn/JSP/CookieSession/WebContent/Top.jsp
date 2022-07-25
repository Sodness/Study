<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	String logout = request.getParameter("logout");
	if(logout != null) {
		//id에 null값을 부여
		session.setAttribute("id", null);
		//session 유지시간을 죽이시오
		session.setMaxInactiveInterval(0);
	}

	String id = (String)session.getAttribute("id");
	if(id == null) {
		id = "User";
	}
%>

	<table width="800">
		<tr height="100">
			<td colspan="2" align="center" width="200">
			<img src="img/logo.jpg" width="200" height="70">
			</td>
			<td colspan="4" align="center">
			<font size="10">낭만 캠핑</font>
			</td>
		</tr>
		<tr height="50">
			<td width="100" align="center">텐트</td>
			<td width="100" align="center">의자</td>
			<td width="100" align="center">식기류</td>
			<td width="100" align="center">침낭</td>
			<td width="100" align="center">테이블</td>
			<td width="100" align="center">화로</td>
			<td width="200" align="center">
		
		<%	if(id.equals("User")) { %>
				<%=id %>님 <button onclick="location.href='SessionMain.jsp?center=SessionLoginForm.jsp'"> 로그인 </button>
		<%	}else { %>
				<%=id %>님 <button onclick="location.href='SessionMain.jsp?logout=1'"> 로그아웃 </button>
		<%	} %>
		
			</td>
		</tr>
	</table>

</body>
</html>