"""x = 3
y = 4
print(x, y)
t = x
x = y
y = t
print(x, y)"""

"""number = input("학번 : ")
name = input("이름 : ")
print(number, name)
"""

"""x = int(input("1 : "))
y = int(input("2 : "))
print(x+y)"""

"""x = int(input("정수 : "))
print(x, type(x))
x = float(input("실수 : "))
print(x, type(x))
x = input("문자열 : ")
print(x, type(x))"""

"""x = float(input("실수 : "))
print(x, type(x))
x = int(x)
print(x, type(x))
x = str(x)
print(x, type(x))"""


"""a = 3
b = 2
c = 1
a = a+1
b = b
c = a+b
c = c+1
print(a, b, c)"""


"""s1 = "pyt"
s2 = "hon"
s3 = s1 + s2
print(s1, s2, s3)"""


"""s1 = "대한"
s2 = "민국"
print(s1 + s2)
print(s1 + " " + s2)
print(s1 + s2 + " 만세")"""


"""s = "#"
print(s*3)
print(s*5)"""


"""str = input("문자열 입력 : ")
print(str + "을 입력하였습니다.")"""

"""x = int(input("정수 입력 : "))
print(x+10)
"""

"""x = float(input("실수 입력 : "))
y = int(x)
print(x, y)"""

"""a = int(input("정수 입력 : "))
b = str(a)
print(a, type(a), b, type(b))"""

import turtle, time

"""length = int(input("길이 : "))
turtle.shape("turtle")
turtle.forward(length)
time.sleep(1)"""


"""length = int(input("한 변의 길이 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.left(120)
turtle.forward(length)
turtle.left(120)
turtle.forward(length)
time.sleep(1)
"""

"""radius = int(input("한 변의 길이 : "))
turtle.shape("turtle")
turtle.circle(radius)
turtle.circle(radius, steps=4)
time.sleep(1)"""


"""distance = int(input("한 변의 길이 : "))
turtle.shape("turtle")
turtle.forward(distance)
turtle.right(90)
turtle.forward(distance)
turtle.right(90)
turtle.forward(distance)
time.sleep(1)"""

"""s1 = "#"
s2 = "@"
print(s1*3)
print(s2*3)
print((s1+s2)*4)
"""

"""s1 = "#"
rept = int(input("반복 : "))
print(s1*rept)
rept = int(input("반복 : "))
print(s1*rept)"""

"""year = int(input("해당 연도 : "))
print("경과 연도 :", year - 2000)"""

"""horizontal = int(input("가로 : "))
vertical = int(input("세로 : "))
print("면적 =", horizontal*vertical)"""

"""radius = int(input("반지름 : "))
print("원의 넓이 =", radius*radius*3.14)"""

"""a = int(input("정수1 : "))
b = int(input("정수2 : "))
c = int(input("정수3 : "))
sum = a + b + c
avg = sum / 3
print("정수1 :", a, "정수2 :", b, "정수3 :", c)
print("합:", sum, "평균:", avg)"""

"""subject = input("과목 : ")
score = input("점수 : ")
print("선호 과목 :", subject, ", 희망 점수 :", score)"""

"""x = int(input("x 좌표 : "))
y = int(input("y 좌표 : "))
turtle.shape("turtle")
turtle.goto(x, y)
turtle.stamp()
turtle.up()
x = int(input("x 좌표 : "))
y = int(input("y 좌표 : "))
turtle.goto(x, y)
turtle.down()
turtle.stamp()
turtle.up()
x = int(input("x 좌표 : "))
y = int(input("y 좌표 : "))
turtle.goto(x, y)
turtle.down()
turtle.stamp()
time.sleep(1)"""


"""radius = int(input("반지름 : "))
length = int(input("진행 : "))
turtle.shape("turtle")
turtle.circle(radius)
turtle.forward(length)
turtle.circle(radius)
turtle.forward(length)
turtle.circle(radius)
turtle.forward(length)
time.sleep(1)"""


a = int(input("주기 : "))
b = int(input("크기 : "))
turtle.shape("turtle")
turtle.left(90)
turtle.forward(b)
turtle.right(90)
turtle.forward(b)

turtle.right(90)
turtle.forward(a)
turtle.left(90)
turtle.forward(b)
turtle.left(90)
turtle.forward(a)

turtle.right(90)
turtle.forward(b)
turtle.right(90)
turtle.forward(a)
turtle.left(90)
turtle.forward(b)
turtle.left(90)
turtle.forward(b)
time.sleep(1)
