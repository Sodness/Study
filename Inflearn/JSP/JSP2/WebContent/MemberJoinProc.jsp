<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<center>
	<h2>ȸ�� ���� ����</h2>
	<%
		request.setCharacterEncoding("EUC-KR");
	
		//String id = request.getParameter("id");
	%>
	
	<!-- request�� �Ѿ�� �����͸� �ڹ� ����� ���� �����ִ� useBean -->
	<jsp:useBean id="mbean" class="bean.MemberBean"> <!-- ��ü���� MemberBean mbean = new MemberBean() -->
		<!-- jsp ������ �ڹٺ� Ŭ����(MemberBean)�� �����͸� ����(�־���) -->
		<jsp:setProperty name="mbean" property="*" /> <!-- �ڵ����� ��� ���ν����ּ��� -->
	</jsp:useBean>
	
<%-- 	<h2>����� ���̵�� <jsp:getProperty name="mbean" property="id" /></h2>
	<h2>����� �н������ <jsp:getProperty name="mbean" property="pw" /></h2>
	<h2>����� �̸��ϴ� <jsp:getProperty name="mbean" property="email" /></h2>
	<h2>����� ��ȭ��ȣ�� <jsp:getProperty name="mbean" property="tel" /></h2>
	<h2>����� �ּҴ� <jsp:getProperty name="mbean" property="address" /></h2> --%>
	
	<h2>����� ���̵�� <%=mbean.getId() %></h2>
	
	</center>

</body>
</html>