<%@page import="db.CarListBean"%>
<%@page import="java.util.Vector"%>
<%@page import="db.RentcarDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>
	<center>
	<%
		RentcarDAO rentDAO = new RentcarDAO();
		Vector<CarListBean> v = rentDAO.getSelectCar();
	%>
	
		<table width="1000">
		<tr height="100">
			<td align="center" colspan="3">
			<font size="6" color="gray">�ֽ��� �ڵ��� </font>
			</td>
		</tr>
		
		<tr height="240">
		<%
			for(int i=0; i<v.size(); i++) {
				CarListBean bean = v.get(i);
		%>
			<td width="333" align="center">
				<a href="RentcarMain.jsp?center=CarReserveInfo.jsp?no=<%=bean.getNo()%>">
				<img alt="" src="img/<%=bean.getImg()%>" width="300" height="200">
				</a>
				<p>������: <%=bean.getName() %></p>
			</td>
		<%
			}
		%>
		</tr>
		</table>
		
		<!-- <hr color="red" size="3"> -->
		<p><font size="4" color="gray"><b>���� �˻� �ϱ� </b></font><br><br></p>
		<form action="RentcarMain.jsp?center=CarCategoryList.jsp" method="post">
			<font size="3" color="gray"><b>���� �˻� �ϱ� </b></font> &nbsp;&nbsp;
			<select name='category'>
				<option value="1">���� </option>
				<option value="2">���� </option>
				<option value="3">���� </option>
			</select> &nbsp;&nbsp;
			<input type="submit" value="�˻�"> &nbsp;&nbsp;
		</form>
		<button onclick="location.href='RentcarMain.jsp?center=CarAllList.jsp'">��ü �˻� </button>
	</center>

</body>
</html>