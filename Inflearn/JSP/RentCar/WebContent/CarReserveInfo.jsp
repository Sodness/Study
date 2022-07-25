<%@page import="db.CarListBean"%>
<%@page import="db.RentcarDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>

<%
	int no = Integer.parseInt(request.getParameter("no"));
	RentcarDAO rentDAO = new RentcarDAO();
	CarListBean bean = rentDAO.getOneCar(no);

	int category = bean.getCategory();
	String carSize = "";
	if(category == 1) {
		carSize = "소형";
	}
	else if(category == 2) {
		carSize = "중형";
	}
	else if(category == 3) {
		carSize = "대형";
	}
%>
<center>

	<table width="1000">
	<form action="RentcarMain.jsp?center=CarOptionSelect.jsp" method="post">
	<tr height="100">
		<td align="center" colspan="3">
		<font size="6"><%=bean.getName() %> 차량 선택</font>
		</td>
	</tr>
	<tr>
		<td rowspan="6" width="500" align="center">
		<img src="img/<%=bean.getImg() %>" width="450">
		</td>
		
		<td width="250" align="center">차량이름 </td>
		<td width="250" align="center"><%=bean.getName() %> </td>
	</tr>
	<tr>
		<td width="250" align="center">차량수량 </td>
		<td width="250" align="center">
		<select name="carQty">
			<option value="1">1</option>
			<option value="2">2</option>
			<option value="3">3</option>
		</select>
		</td>
	</tr>
	<tr>
		<td width="250" align="center">차량분류 </td>
		<td width="250" align="center"><%=carSize %> </td>
	</tr>
	<tr>
		<td width="250" align="center">대여가격 </td>
		<td width="250" align="center"><%=bean.getPrice() %>원 </td>
	</tr>
	<tr>
		<td width="250" align="center">제조회사 </td>
		<td width="250" align="center"><%=bean.getCompany() %> </td>
	</tr>
	<tr>
		<td align="center" colspan="2">
		<input type="hidden" name="no" value="<%=bean.getNo() %>">
		<input type="hidden" name="img" value="<%=bean.getImg() %>">
		<input type="submit" value="옵션 선택후 구매하기">
		</td>
	</tr>
	</table>
	
	<br><br><br>
	<font size="5" color="gray">차량 정보 보기 </font>
	<p><%=bean.getInfo() %></p>
	</form>
	
</center>
</body>
</html>