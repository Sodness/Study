"""score1 = int(input("국어 : "))
score2 = int(input("영어 : "))
score3 = int(input("수학 : "))
sum = score1 + score2 + score3
avg = sum / 3
print("총점 :", sum)
print("평균 :", avg)

if 80 <= avg:
    print("평가 : 잘함")
elif 70 <= avg <= 79:
    print("평가 : 보통")
else:
    print("평가 : 미흡")

"""

"""num = int(input("정수 : "))
if num % 2 == 0:
    print("짝수")
"""


"""num = int(input("정수 : "))
if num % 2 == 0:
    print("짝수")
else:
    print("홀수")
num = int(input("정수 : "))
if num % 2 == 0:
    print("짝수")
else:
    print("홀수")"""


"""a = int(input("a : "))
b = int(input("b : "))
if a % b == 0:
    print("배수")
else:
    print("배수가 아님")
a = int(input("a : "))
b = int(input("b : "))
if a % b == 0:
    print("배수")
else:
    print("배수가 아님")"""


import turtle, time

"""a = int(input("방향 : "))
length = int(input("길이 : "))
turtle.shape("turtle")
if a == 1:
    turtle.forward(length)
    time.sleep(1)
elif a == 2:
    turtle.right(90)
    turtle.forward(length)
    time.sleep(1)"""


"""shape = input("도형의 종류 : ")
if shape == "삼각형":
    length = int(input("한 변의 길이 : "))
    turtle.shape("turtle")
    turtle.forward(length)
    turtle.left(120)
    turtle.forward(length)
    turtle.left(120)
    turtle.forward(length)
elif shape == "사각형":
    row = int(input("가로 길이 : "))
    height = int(input("세로 길이 : "))
    turtle.shape("turtle")
    turtle.forward(row)
    turtle.right(90)
    turtle.forward(height)
    turtle.right(90)
    turtle.forward(row)
    turtle.right(90)
    turtle.forward(height)"""


"""num = int(input("정수 : "))
if num < 100:
    print(num * 0.9)
else:
    print(num * 1.1)
num = int(input("정수 : "))
if num < 100:
    print(num * 0.9)
else:
    print(num * 1.1)"""


"""a = int(input("a : "))
b = int(input("b : "))
if 0 <= a+b-b*b:
    print(a+b-b*b)
else:
    print("음수")
a = int(input("a : "))
b = int(input("b : "))
if 0 <= a+b-b*b:
    print(a+b-b*b)
else:
    print("음수")"""


"""num = int(input("정수 : "))
if num % 2 == 0 and num % 3 == 0:
    print("나누어짐")
else:
    print("나누어지지 않음")
num = int(input("정수 : "))
if num % 2 == 0 and num % 3 == 0:
    print("나누어짐")
else:
    print("나누어지지 않음")
num = int(input("정수 : "))
if num % 2 == 0 and num % 3 == 0:
    print("나누어짐")
else:
    print("나누어지지 않음")"""


"""a = int(input("a : "))
b = int(input("b : "))
if a - b > 0:
    print("a > b")
elif a - b < 0:
    print("a < b")
else:
    print("a == b")
a = int(input("a : "))
b = int(input("b : "))
if a - b > 0:
    print("a > b")
elif a - b < 0:
    print("a < b")
else:
    print("a == b")
a = int(input("a : "))
b = int(input("b : "))
if a - b > 0:
    print("a > b")
elif a - b < 0:
    print("a < b")
else:
    print("a == b")"""


"""a = 5
b = 3
for i in range(4):
    char = input("연산자 : ")
    if char == "+":
        print("5 + 3 =", a + b)
    elif char == "-":
        print("5 - 3 =", a - b)
    elif char == "*":
        print("5 * 3 =", a * b)
    elif char == "/":
        print("5 / 3 =", a / b)"""


"""pH = int(input("ph : "))
if 0 <= pH <= 4:
    print("강산성")
elif 5 <= pH <= 6:
    print("약산성")
elif pH == 7:
    print("중성")
elif 8 <= pH <= 9:
    print("약염기성")
elif 10 <= pH <= 14:
    print("강염기성")
pH = int(input("ph : "))
if 0 <= pH <= 4:
    print("강산성")
elif 5 <= pH <= 6:
    print("약산성")
elif pH == 7:
    print("중성")
elif 8 <= pH <= 9:
    print("약염기성")
elif 10 <= pH <= 14:
    print("강염기성")"""


"""year = int(input("연도 : "))
if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
    print("윤년")
else:
    print("평년")"""


"""cm = int(input("키(cm) : "))
kg = int(input("몸쿠게(kg) : "))
BMI = kg / (cm*0.01*cm*0.01)
if BMI < 18.5:
    print("저체중")
elif 18.5 <= BMI < 23:
    print("정상")
elif 23 <= BMI < 25:
    print("과체중")
elif 25 <= BMI < 30:
    print("경도비만")
elif 30 <= BMI < 35:
    print("중등도비만")
elif 35 <= BMI:
    print("고도비만")"""



"""month1 = int(input("전 달 전력량 : "))
month2 = int(input("이번 달 전력량 : "))
if month2 < month1:
    print("전력량 입력 오류")
else:
    kWh = month2 - month1
    print("이번 달 전력 사용량 =", kWh)
    if kWh <= 200:
        print("전기요금 =", 910 + kWh * 93.3)
    elif 200 < kWh <= 400:
        print("전기요금 =", 1600 + kWh * 187.9)
    else:
        print("전기요금 =", 7300 + kWh * 280.6)"""


"""opnd1 = int(input("피연산자1 : "))
if 100 <= opnd1 < 1000 :
    opnd2 = int(input("피연산자2 : "))
    if 0 < opnd2 < 10:
        print(opnd1, "*", opnd2)
        print("= (", opnd1//100, "+", opnd1//10%10, "+", opnd1%10, ") *", opnd2)
        print("=", opnd1//100, "*", opnd2, "+", opnd1//10%10, "*", opnd2, "+", opnd1%10, "*", opnd2)
        print("=", (opnd1//100)*opnd2, "+", (opnd1//10%10)*opnd2, "+", (opnd1%10)*opnd2)
        print("=", opnd1*opnd2)
    else:
        print("opnd2 입력 오류")
else:
    print("opnd1 입력 오류")"""


"""radius = int(input("반지름 : "))
stype = int(input("도형 종류 : "))
outer = int(input("바깥 원(1:O, 0:X) :"))
turtle.shape("turtle")
turtle.circle(radius, steps=stype)
if outer == 1:
    turtle.circle(radius)
    time.sleep(1)
elif outer == 0:
    time.sleep(1)"""


"""num = int(input("방향(1:왼쪽, 2:오른쪽, 3:위쪽, 4:아래쪽) : "))
if num == 1:
    turtle.shape("turtle")
    turtle.shapesize(1, 1)
    turtle.pensize(1)
    turtle.setheading(180)
    turtle.forward(200)
elif num == 2:
    turtle.shape("turtle")
    turtle.shapesize(2, 2)
    turtle.pensize(2)
    turtle.setheading(0)
    turtle.forward(200)
elif num == 3:
    turtle.shape("turtle")
    turtle.shapesize(3, 3)
    turtle.pensize(3)
    turtle.setheading(90)
    turtle.forward(200)
elif num == 4:
    turtle.shape("turtle")
    turtle.shapesize(4, 4)
    turtle.pensize(4)
    turtle.setheading(-90)
    turtle.forward(200)
"""





























