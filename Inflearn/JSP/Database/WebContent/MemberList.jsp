<%@page import="model.MemberBean"%>
<%@page import="java.util.Vector"%>
<%@page import="model.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<!-- 1. �����ͺ��̽����� ���ȸ���� ������ ������ -->
<%
	MemberDAO mDAO = new MemberDAO();
	Vector<MemberBean> vec = mDAO.selectAllMember();
%>

	<center>
	<h2>��� ȸ�� ����</h2>
	<table width="800" border="1">
		<tr height="50">
		<td align="center" width="150">���̵�</td>
		<td align="center" width="250">�̸���</td>
		<td align="center" width="200">��ȭ��ȣ</td>
		<td align="center" width="200">���</td>
		</tr>
		<%
			for(int i=0; i<vec.size(); i++) {
				MemberBean bean = vec.get(i);
		%>
		<tr height="50">
		<td align="center" width="150">
			<a href="MemberInfo.jsp?id=<%=bean.getId() %>"><%=bean.getId() %></a>
		</td>
		<td align="center" width="250"><%=bean.getEmail() %></td>
		<td align="center" width="200"><%=bean.getTel() %></td>
		<td align="center" width="200"><%=bean.getHobby() %></td>
		</tr>
		<%	} %>
	</table>
	</center>

</body>
</html>