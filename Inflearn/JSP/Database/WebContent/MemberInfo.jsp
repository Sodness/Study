<%@page import="model.MemberBean"%>
<%@page import="model.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<%
		String id = request.getParameter("id");
		MemberDAO mDAO = new MemberDAO();
		MemberBean mbean = mDAO.selectMember(id);
	%>
	
	<center>
	<h2>ȸ�� ���� ����</h2>
	<table width="400" border="1">
	<tr height="50">
		<td align="center" width="150">���̵�</td>
		<td align="center" width="250"><%=mbean.getId() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">�̸���</td>
		<td align="center" width="250"><%=mbean.getEmail() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">��ȭ</td>
		<td align="center" width="250"><%=mbean.getTel() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">���</td>
		<td align="center" width="250"><%=mbean.getHobby() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">����</td>
		<td align="center" width="250"><%=mbean.getJob() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">����</td>
		<td align="center" width="250"><%=mbean.getAge() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">����</td>
		<td align="center" width="250"><%=mbean.getInfo() %></td>
	</tr>
	<tr height="50">
		<td align="center" colspan="2">
		<button onclick="location.href='MemberUpdateForm.jsp?id=<%=mbean.getId()%>'">ȸ������</button>
		<button onclick="location.href='MemberDeleteForm.jsp?id=<%=mbean.getId()%>'">ȸ������</button>
		<button onclick="location.href='MemberList.jsp'">��Ϻ���</button>
		<button onclick="location.href='MemberJoin.jsp'">ȸ������</button>
		</td>
	</tr>
	</table>
	</center>


</body>
</html>