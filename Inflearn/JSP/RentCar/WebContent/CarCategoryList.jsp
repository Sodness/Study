<%@page import="db.CarListBean"%>
<%@page import="java.util.Vector"%>
<%@page import="db.RentcarDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<body>
<%
	int category = Integer.parseInt(request.getParameter("category"));
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
		<tr height="100">
			<td align="center" colspan="3">
			<font size="6" color="gray"><%=carSize %> 자동차 </font>
			</td>
		</tr>

<%
	RentcarDAO rentDAO = new RentcarDAO();
	Vector<CarListBean> v = rentDAO.getCategoryCar(category);
	
	int cnt = 0;
	for(int i=0; i<v.size(); i++) {
		CarListBean bean = v.get(i);
		if(cnt%3 == 0) { %>
			<tr>
	<%  } %>
				<td width="333" align="center">
					<a href="RentcarMain.jsp?center=CarReserveInfo.jsp?no=<%=bean.getNo()%>">
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