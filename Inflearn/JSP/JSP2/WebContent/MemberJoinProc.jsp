<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<center>
	<h2>회원 정보 보기</h2>
	<%
		request.setCharacterEncoding("EUC-KR");
	
		//String id = request.getParameter("id");
	%>
	
	<!-- request로 넘어온 데이터를 자바 빈즈랑 맴핑 시켜주는 useBean -->
	<jsp:useBean id="mbean" class="bean.MemberBean"> <!-- 객체생성 MemberBean mbean = new MemberBean() -->
		<!-- jsp 내용을 자바빈 클래스(MemberBean)에 데이터를 맵핑(넣어줌) -->
		<jsp:setProperty name="mbean" property="*" /> <!-- 자동으로 모두 맵핑시켜주세요 -->
	</jsp:useBean>
	
<%-- 	<h2>당신의 아이디는 <jsp:getProperty name="mbean" property="id" /></h2>
	<h2>당신의 패스워드는 <jsp:getProperty name="mbean" property="pw" /></h2>
	<h2>당신의 이메일는 <jsp:getProperty name="mbean" property="email" /></h2>
	<h2>당신의 전화번호는 <jsp:getProperty name="mbean" property="tel" /></h2>
	<h2>당신의 주소는 <jsp:getProperty name="mbean" property="address" /></h2> --%>
	
	<h2>당신의 아이디는 <%=mbean.getId() %></h2>
	
	</center>

</body>
</html>