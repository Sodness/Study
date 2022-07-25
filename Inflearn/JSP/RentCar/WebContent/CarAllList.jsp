<%@page import="db.CarListBean"%>
<%@page import="java.util.Vector"%>
<%@page import="db.RentcarDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>
<center>
	<table width="1000">
		<tr height="100">
			<td align="center" colspan="3">
			<font size="6" color="gray">전체 렌트카 보기 </font>
			</td>
		</tr>

<%
	RentcarDAO rentDAO = new RentcarDAO();
	Vector<CarListBean> v = rentDAO.getAllCar();
	
	int cnt = 0;
	for(int i=0; i<v.size(); i++) {
		CarListBean bean = v.get(i);
		if(cnt%3 == 0) { %>
			<tr>
	<%  } %>
				<td width="333" align="center">
					<a href="Rentcarmain.jsp?center=CarReserveInfo.jsp?no=<%=bean.getNo()%>">
					<img src="img/<%=bean.getImg()%>" width="300" height="200">
					</a>
					<p><font size="3" color="gray"><b>차량명: <%=bean.getName() %></b></font></p>
				</td>
<%  
		cnt = cnt+1;
	} 
%>


	<tr>
		<td></td>
	</tr>
	</table>
</center>
</body>
</html>