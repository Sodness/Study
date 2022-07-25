<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

	<center>
	<h2> 회원 정보 보기</h2>
	<%
		request.setCharacterEncoding("EUC-KR");

		String id = request.getParameter("id");
		String pw1 = request.getParameter("pw1");
		String pw2 = request.getParameter("pw2");
		String email = request.getParameter("email");
		String tel = request.getParameter("tel");
		String [] hobby = request.getParameterValues("hobby");
		String job = request.getParameter("job");
		String age = request.getParameter("age");
		String info = request.getParameter("info");
	
	
		if(!pw1.equals(pw2)) {
	%>
		<script type="text/javascript">
			alert("비밀번호가 맞지 않습니다.");
			history.go(-1);
		</script>
	<%
		}
	%>

	<table width="500" border="1">
		<tr height="50">
			<td width="150" align="center"> 아이디 </td>
			<td width="350" align="center"><%= id %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 패스워드1 </td>
			<td width="350" align="center"><%= pw1 %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 패스워드2 </td>
			<td width="350" align="center"><%= pw2 %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 이메일 </td>
			<td width="350" align="center"><%= email %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 전화번호 </td>
			<td width="350" align="center"><%= tel %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 관심분야 </td>
			<td width="350" align="center">
			<%
				for(int i=0; i<hobby.length; i++) {
					out.write(hobby[i] + " ");
				}
			%>
			</td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 직업 </td>
			<td width="350" align="center"><%= job %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 나이 </td>
			<td width="350" align="center"><%= age %></td>
		</tr>
		<tr height="50">
			<td width="150" align="center"> 의견 </td>
			<td width="350" align="center"><%= info %></td>
		</tr>
	</table>



</center>

</body>
</html>