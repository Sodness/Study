<%@page import="model.BoardBean"%>
<%@page import="model.BoardDAO"%>
<%@page import="java.util.Vector"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	BoardDAO bDAO = new BoardDAO();
	Vector<BoardBean> vec = bDAO.getAllBoard();
%>

	<center>
	<h2> ��ü �Խñ� ���� </h2>
	
	<table width="700" border="1" bgcolor="skyblue">
		<tr height="40">
			<td align="center" width="50"> ��ȣ </td>
			<td align="center" width="320"> ���� </td>
			<td align="center" width="100"> �ۼ��� </td>
			<td align="center" width="150"> �ۼ��� </td>
			<td align="center" width="80"> ��ȸ�� </td>
		</tr>
	<%
		for(int i=0; i<vec.size(); i++) {
			BoardBean bean = vec.get(i);	
	%>
		<tr height="40">
			<td align="center" width="50"> <%=i+1 %> </td>
			<td align="left" width="320"> 
				<a href="BoardInfo.jsp?num=<%=bean.getNum()%>" style="text-decoration:none"> 
				<%
					if(bean.getRe_step() > 1) {
						for(int j=0; j<(bean.getRe_step()-1)*4; j++) {
				%>
							&nbsp;
				<%
						}
					}
				%>
				<%=bean.getSubject() %> </a> 
			</td>
			<td align="center" width="100"> <%=bean.getWriter() %> </td>
			<td align="center" width="150"> <%=bean.getReg_date() %> </td>
			<td align="center" width="80"> <%=bean.getReadcount() %> </td>
		</tr>
	<%  } %>
	
		<tr height="40">
			<td align="center" colspan="5">
				<input type="button" value="�۾���" onclick="location.href='BoardWriteForm.jsp'">
			</td>
		</tr>
	
	</table>
	</center>

</body>
</html>