<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

	<center>
	<h2> ���� �α��� ó�� 2 </h2>
	<%
		//������ �̿��Ͽ� �����͸� �ҷ���
		String id = (String)session.getAttribute("id");
		String pw = (String)session.getAttribute("pw");
	%>
	
	<h2> ����� ���̵�� <%=id %> �Դϴ�. �н������ <%=pw %> �Դϴ�. </h2>
	</center>

</body>
</html>