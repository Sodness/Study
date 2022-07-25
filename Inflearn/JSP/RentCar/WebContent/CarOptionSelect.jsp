<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	int no = Integer.parseInt(request.getParameter("no"));
	int carQty = Integer.parseInt(request.getParameter("carQty"));
	String img = request.getParameter("img");
%>

<center>

	<form action="RentcarMain.jsp?center=CarReserveResult.jsp" method="post">
	<table>
	<tr height="100">
		<td colspan="3" align="center">
			<font size="6" color="gray">옵션 선택 </font>
		</td>
	</tr>
	<tr>
		<td rowspan="7" width="500" align="center">
			<img src="img/<%=img %>" width="450">
		</td>
		<td width="250" align="center">대여기간 </td>
		<td width="250" align="center">
			<select name="dDay">
			<option value="1">1일</option>
			<option value="2">2일</option>
			<option value="3">3일</option>
			<option value="4">4일</option>
			<option value="5">5일</option>
			<option value="6">6일</option>
			<option value="7">7일</option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">대여일 </td>
		<td width="250" align="center">
			<input type="date" name="rDay" size="15">
		</td>
	</tr>
	<tr>
		<td width="250" align="center">보험적용 </td>
		<td width="250" align="center">
			<select name="useIn">
			<option value="1">적용 (1일 1만원) </option>
			<option value="2">비적용 </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">Wifi 적용 </td>
		<td width="250" align="center">
			<select name="useWifi">
			<option value="1">적용 (1일 1만원) </option>
			<option value="2">비적용 </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">네비게이션 적용 </td>
		<td width="250" align="center">
			<select name="useNavi">
			<option value="1">적용 (무료) </option>
			<option value="2">비적용 </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">베이비시트 적용 </td>
		<td width="250" align="center">
			<select name="useSeat">
			<option value="1">적용 (1일 1만원) </option>
			<option value="2">비적용 </option>
			</select>
		</td>
	</tr>
	<tr>
		<td align="center" colspan="2">
			<input type="submit" value="차량 예약하기">
		</td>
	</tr>
	</table>
	</form>

</center>
</body>
</html>