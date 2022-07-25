"""x = int(input("정수1 : "))
y = int(input("정수2 : "))
print(x + y)
print(x - y)
print(x * y)
print(x / y)"""

"""x = int(input("금액 : "))
x500 = x // 500
x100 = x % 500
x100 = x100 // 100
print("500원 : ", x500, "100원 : ", x100)"""

"""x = int(input("정수 : "))
x += 2
print(x)
x -= 2
print(x)
x *= 2
print(x)
x /= 2
print(x)"""

"""x = int(input("값1 : "))
y = int(input("값2 : "))
z = (x+y) / 2
print("평균 :", z)"""

"""a = int(input("숫자1 : "))
b = int(input("숫자2 : "))
print(a, "/", b, "=", a/b)
print(a, "//", b, "=", a//b)
print(a, "%", b, "=", a%b)"""

"""a = int(input("정수 : "))
b = c = d = a
print(a, b, c, d)"""

"""a = 3
b = 2
c = 4"""
"""print(a + b)
a += b
print(a)"""

"""print(a*b)
a *= b
print(a)"""


"""a = a * (b + c)
print(a)
a = 3
a *= b + c
print(a)"""


"""a = a - b * c
print(a)
a = 3
a -= b * c
print(a)"""

"""n = 3 + 4/2 + 1
print(n)
n = (1+2) / (2+4)
print(n)
n = (3*2) / (4 - (2/3))
print(n)
"""

"""x = int(input("정수 : "))
y = 3 * x + 4
print(y)"""

"""sco1 = int(input("국어 : "))
sco2 = int(input("영어 : "))
sco3 = int(input("수학 : "))
sum = sco1 + sco2 + sco3
avg = sum / 3
print("총점 :", sum)
print("평균 :", avg)"""

"""x = int(input("정수 : "))
sum = 0
sum = sum + x
print("누적합 :", sum)
x = int(input("정수 : "))
sum = sum + x
print("누적합 :", sum)
x = int(input("정수 : "))
sum = sum + x
print("누적합 :", sum)"""

"""x = int(input("정수 : "))
res = 1
res = res * x
print("누적곱 :", res)
x = int(input("정수 : "))
res = res * x
print("누적곱 :", res)
x = int(input("정수 : "))
res = res * x
print("누적곱 :", res)"""

"""sum = 0
a = 1
sum += a

cum_product = 1
a = 5
cum_product *= a

print(sum, cum_product)"""

import turtle, time

"""length = int(input("길이 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.right(45)
turtle.forward(length*2)
turtle.right(45)
turtle.forward(length*4)
turtle.right(45)
turtle.forward(length*8)
turtle.right(45)
turtle.forward(length*16)"""


"""length = int(input("길이 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.right(45)
turtle.forward(length/2)
turtle.right(45)
turtle.forward(length/4)
turtle.right(45)
turtle.forward(length/8)
turtle.right(45)
turtle.forward(length/16)"""

"""length = int(input("길이 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length*2)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length*4)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length*8)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length*16)"""


"""length = int(input("길이 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length/2)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length/4)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length/8)
turtle.up()
turtle.goto(0, 0)
turtle.down()
turtle.right(45)
turtle.forward(length/16)"""


"""print("아버지의 나이 =", 38 -5)
print("어머니의 나이 =", 34 -5)"""


"""radius = int(input("반지름 : "))
print("원의 넓이 :", radius*radius*3.14)
print("원의 둘레 :", 2*radius*3.14)"""

"""top = int(input("윗변 : "))
bottom = int(input("밑변 : "))
height = int(input("높이 : "))
print("사다리꼴의 넓이 :", (top+bottom) * height/2)"""

"""minute = int(input("분 : "))
print(60*minute, "초")
"""

"""sec = int(input("초 : "))
print(sec, "초 =", sec//60, "분", sec%60, "초")
"""

"""sec = int(input("초 : "))
print(3.4*sec, "m")"""

"""distence = float(input("1초당 움직이는 거리 : "))
print(distence*3600, "m/h")
print(distence*3.6, "km/h")"""

"""degree = int(input("섭씨온도 : "))
print("음속 :", 311+0.6*degree, "m/s")"""

"""inch = int(input("인치 : "))
print(inch, "인치 =", inch*2.54, "센티미터")"""


"""cm = int(input("센티미너 : "))
print(cm, "센티미터 =", cm*0.39370, "인치")"""


"""a = int(input("닭 : "))
b = int(input("토끼 : "))
c = int(input("돼지 : "))
print("다리 합계 :", 2*a + 4*b + 4*c)"""

"""a = int(input("경과 연수 : "))
print("1년 총지출 =", 365*4500, "원")
print("30년 총지출 =", 30*365*4500, "원")"""


"""opnd1 = int(input("피연산자1 : "))
opnd2 = int(input("피연산자2 : "))
print(opnd1, "*", opnd2)
print("= (", opnd1//100, "+", opnd1//10, "+", opnd1%10, ") *", opnd2)
print("=", opnd1//100, "*", opnd2, "+", opnd1//10, "*", opnd2, "+", opnd1%10, "*", opnd2)
print("=", opnd1//100 * opnd2, "+", opnd1//10 * opnd2, "+", opnd1%10 * opnd2)
print("=", opnd1 * opnd2)"""

"""length = int(input("길이 : "))
distance = int(input("간격 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.up()
turtle.goto(0, -distance)
turtle.down()
turtle.forward(length)
turtle.up()
turtle.goto(0, -distance*2)
turtle.down()
turtle.forward(length)
time.sleep(1)"""


"""length = int(input("길이 : "))
distance = int(input("간격 : "))
turtle.shape("turtle")
turtle.forward(length+distance*0)
turtle.up()
turtle.goto(0, -distance)
turtle.down()
turtle.forward(length+distance*1)
turtle.up()
turtle.goto(0, -distance*2)
turtle.down()
turtle.forward(length+distance*2)
time.sleep(1)"""

"""radius = int(input("반지름 : "))
turtle.shape("turtle")
turtle.circle(radius)
turtle.up()
turtle.goto(0, radius*2)
turtle.down()
turtle.circle(radius/2)
time.sleep(1)"""




