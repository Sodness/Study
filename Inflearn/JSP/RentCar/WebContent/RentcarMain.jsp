<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	String center = request.getParameter("center");
	if(center == null) {
		center = "Center.jsp";
	}
%>
	<center>
	<table width="1000">
	<tr height="140" align="center">
		<td align="center" widht="1000">
			<jsp:include page="Top.jsp"></jsp:include>
		</td>
	</tr>
	<tr align="center">
		<td align="center" widht="1000">
			<jsp:include page="<%=center %>"></jsp:include>
		</td>
	</tr>
	<tr height="100" align="center">
		<td align="center" widht="1000">
			<jsp:include page="Bottom.jsp"></jsp:include>
		</td>
	</tr>
	</table>
	</center>

</body>
</html>