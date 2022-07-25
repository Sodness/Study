<%@page import="model.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<%
		request.setCharacterEncoding("euc-kr");
	%>
	
	<jsp:useBean id="mbean" class="model.MemberBean">
		<jsp:setProperty name="mbean" property="*"/>
	</jsp:useBean>
	
	<%
		MemberDAO mDAO = new MemberDAO();
		
		String pw = mDAO.getPw(mbean.getId());
		if(mbean.getPw1().equals(pw)) {
			mDAO.deleteMember(mbean.getId());
			response.sendRedirect("MemberList.jsp");
			
		}else {
	%>
			<script type="text/javascript">
				alert("패스워드가 틀립니다. 다시 확인해 주세요.");
				history.go(-1);
			</script>
	<%
		}
	%>

</body>
</html>