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
	<h2>회원 정보 보기</h2>
	<table width="400" border="1">
	<tr height="50">
		<td align="center" width="150">아이디</td>
		<td align="center" width="250"><%=mbean.getId() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">이메일</td>
		<td align="center" width="250"><%=mbean.getEmail() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">전화</td>
		<td align="center" width="250"><%=mbean.getTel() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">취미</td>
		<td align="center" width="250"><%=mbean.getHobby() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">직업</td>
		<td align="center" width="250"><%=mbean.getJob() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">나이</td>
		<td align="center" width="250"><%=mbean.getAge() %></td>
	</tr>
	<tr height="50">
		<td align="center" width="150">정보</td>
		<td align="center" width="250"><%=mbean.getInfo() %></td>
	</tr>
	<tr height="50">
		<td align="center" colspan="2">
		<button onclick="location.href='MemberUpdateForm.jsp?id=<%=mbean.getId()%>'">회원수정</button>
		<button onclick="location.href='MemberDeleteForm.jsp?id=<%=mbean.getId()%>'">회원삭제</button>
		<button onclick="location.href='MemberList.jsp'">목록보기</button>
		<button onclick="location.href='MemberJoin.jsp'">회원가입</button>
		</td>
	</tr>
	</table>
	</center>


</body>
</html>