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
			<font size="6" color="gray">�ɼ� ���� </font>
		</td>
	</tr>
	<tr>
		<td rowspan="7" width="500" align="center">
			<img src="img/<%=img %>" width="450">
		</td>
		<td width="250" align="center">�뿩�Ⱓ </td>
		<td width="250" align="center">
			<select name="dDay">
			<option value="1">1��</option>
			<option value="2">2��</option>
			<option value="3">3��</option>
			<option value="4">4��</option>
			<option value="5">5��</option>
			<option value="6">6��</option>
			<option value="7">7��</option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">�뿩�� </td>
		<td width="250" align="center">
			<input type="date" name="rDay" size="15">
		</td>
	</tr>
	<tr>
		<td width="250" align="center">�������� </td>
		<td width="250" align="center">
			<select name="useIn">
			<option value="1">���� (1�� 1����) </option>
			<option value="2">������ </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">Wifi ���� </td>
		<td width="250" align="center">
			<select name="useWifi">
			<option value="1">���� (1�� 1����) </option>
			<option value="2">������ </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">�׺���̼� ���� </td>
		<td width="250" align="center">
			<select name="useNavi">
			<option value="1">���� (����) </option>
			<option value="2">������ </option>
			</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">���̺��Ʈ ���� </td>
		<td width="250" align="center">
			<select name="useSeat">
			<option value="1">���� (1�� 1����) </option>
			<option value="2">������ </option>
			</select>
		</td>
	</tr>
	<tr>
		<td align="center" colspan="2">
			<input type="submit" value="���� �����ϱ�">
		</td>
	</tr>
	</table>
	</form>

</center>
</body>
</html>