<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	String logout = request.getParameter("logout");
	if(logout != null) {
		//id�� null���� �ο�
		session.setAttribute("id", null);
		//session �����ð��� ���̽ÿ�
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
			<font size="10">���� ķ��</font>
			</td>
		</tr>
		<tr height="50">
			<td width="100" align="center">��Ʈ</td>
			<td width="100" align="center">����</td>
			<td width="100" align="center">�ı��</td>
			<td width="100" align="center">ħ��</td>
			<td width="100" align="center">���̺�</td>
			<td width="100" align="center">ȭ��</td>
			<td width="200" align="center">
		
		<%	if(id.equals("User")) { %>
				<%=id %>�� <button onclick="location.href='SessionMain.jsp?center=SessionLoginForm.jsp'"> �α��� </button>
		<%	}else { %>
				<%=id %>�� <button onclick="location.href='SessionMain.jsp?logout=1'"> �α׾ƿ� </button>
		<%	} %>
		
			</td>
		</tr>
	</table>

</body>
</html>