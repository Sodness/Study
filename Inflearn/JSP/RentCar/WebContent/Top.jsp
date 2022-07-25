<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	String id = (String) session.getAttribute("id");
	if(id == null) {
		id="GUEST";
	}
%>

	<table width="1000" bordercolor="white">
	<tr height="70">
		<td colspan="4">
			<a href="RentcarMain.jsp" style="text-decoration:none">
			<img alt="" src="img/36.jpg" height="65">
			</a>
		</td>
		<td align="center" width="200">
			<%=id %> 님 반갑습니다.
		</td>
	</tr>
	<tr height="50">
		<td align="center" width="200" bgcolor="pink">
			<font color="white" size="4"><a href="RentcarMain.jsp?center=CarReserveMain.jsp" style="text-decoration:none">예약하기</a></font>
		</td>
		<td align="center" width="200" bgcolor="pink">
			<font color="white" size="4"><a href="#" style="text-decoration:none">예약확인</a></font>
		</td>
		<td align="center" width="200" bgcolor="pink">
			<font color="white" size="4"><a href="#" style="text-decoration:none">자유게시판</a></font>
		</td>
		<td align="center" width="200" bgcolor="pink">
			<font color="white" size="4"><a href="#" style="text-decoration:none">이벤트</a></font>
		</td>
		<td align="center" width="200" bgcolor="pink">
			<font color="white" size="4"><a href="#" style="text-decoration:none">고객센터</a></font>
		</td>
	</tr>
	</table>

</body>
</html>