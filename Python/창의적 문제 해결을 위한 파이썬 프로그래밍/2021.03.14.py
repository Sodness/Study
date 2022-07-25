"""def print_python():
    print("파이썬")

print_python()"""


"""def welcome():
    print("환영합니다.")

for i in range(3):
    welcome()"""


"""def welcome(name):
    print("환영합니다.", name, "님")

name = input("이름 : ")
welcome(name)"""


"""str = input("문자열 : ")
num = int(input("횟수 : "))

def print_str(str, num):
    for i in range(num):
        print(str)

print_str(str, num)"""


"""ch = input("문자 : ")
num = int(input("횟수 : "))

def dispch(ch, num):
    for i in range(num):
        print(ch, end="")

dispch(ch, num)"""


"""num1 = int(input("숫자1 : "))
num2 = int(input("숫자2 : "))

def maxnum(num1, num2):
    if num2 < num1:
        return num1
    else:
        return num2

res = maxnum(num1, num2)
print("큰 수 =", res)"""


"""num1 = int(input("숫자1 : "))
num2 = int(input("숫자2 : "))

def minnum(num1, num2):
    if num2 < num1:
        return num2
    else:
        return num1

res = minnum(num1, num2)
print("작은 수 =", res)"""


"""def pow_xy(x, y):
    return x ** y

res = 3 * pow_xy(2, 4) + 5
print(res)"""


"""col = int(input("가로 : "))
row = int(input("세로 : "))

def rectangle_area(col, row):
    return col * row

res = rectangle_area(col, row)
print("가로", col, "세로", row, "인 사각형의 넓이 =", res)"""


"""radius = int(input("반지름 : "))

def circle_area(radius):
    return 3.14*radius*radius

res = circle_area(radius)
print("반지름", radius, "인 원의 넓이 =", res)"""


import turtle, time

"""col = int(input("가로 : "))
row = int(input("세로 : "))

def rectangle_draw(col, row):
    turtle.forward(col)
    turtle.right(90)
    turtle.forward(row)
    turtle.right(90)
    turtle.forward(col)
    turtle.right(90)
    turtle.forward(row)
    time.sleep(1)

rectangle_draw(col, row)"""


"""radius = int(input("반지름 : "))
print("반지름", radius, "인 원의 넓이 =", 3.14*radius*radius)

def circle_draw(radius):
    turtle.circle(radius)

circle_draw(radius)"""


"""def one2n_sum1(num):
    sum = 0
    for i in range(num+1):
        sum = sum + i
    return sum

num = int(input("자연수 : "))
if num < 1:
    print("입력된 수가 1보다 작습니다.")
else:
    sum = one2n_sum1(num)
    print("1 --", num, "=", sum)"""


"""def one2nt_sum(num):
    sum = 0
    for i in range(1, num*10+1):
        sum = sum + i
    return sum

num = int(input("자연수 : "))
if num < 1 or 10 < num:
    print("입력값의 범위를 초과하였습니다.")
else:
    sum = one2nt_sum(num)
    print("1 --", num*10, "=", sum)"""


"""def one2n_sum2(num):
    sum = 0
    if 0 < num:
        for i in range(1, num + 1):
            sum = sum + i
        return sum
    else:
        for i in range(-1, num - 1, -1):
            sum = sum + i
        return sum

num = int(input("정수 : "))
if num == 0:
    print("입력된 수가 0입니다.")
elif 0 < num:
    sum = one2n_sum2(num)
    print("1 --", num, "=", sum)
else:
    sum = one2n_sum2(num)
    print("-1 --", num, "=", sum)"""


"""def m2n_sum(num1, num2):
    sum = 0
    if num1 < num2:
        for i in range(num1, num2+1):
            sum = sum + i
    else:
        for i in range(num2, num1+1):
            sum = sum + i
    return sum

num1 = int(input("정수1 : "))
num2 = int(input("정수2 : "))
sum = m2n_sum(num1, num2)
if num1 < num2:
    print(num1, "--", num2, "=", sum)
else:
    print(num2, "--", num1, "=", sum)"""


"""def pzn(num):
    if num < 0:
        return -1
    elif num == 0:
        return 0
    else:
        return 1

while True:
    num = int(input("정수 : "))
    res = pzn(num)

    if res < 0:
        print("음수")
    elif res == 0:
        print("0")
        break
    else:
        print("양수")"""


"""def fc(temper, action):
    if action == 0:
        res = temper * 1.8 + 32
        tp = ("C2F : ", temper, " => " , res)
        return tp
    elif action == 1:
        res = (temper - 32) / 1.8
        tp = ("F2C : ", temper, " => ", res)
        return tp

temper = int(input("온도 : "))
action = int(input("변환(0:C2F, 1:F2C) : "))
tp = fc(temper, action)
for i in range(len(tp)):
    print(tp[i], end="")"""


"""def welcome(name, msg="환영합니다."):
    print(msg, name, "님")

name = input("이름 : ")
welcome(name)
welcome(name, "반갑습니다.")"""


"""def calc(num1, num2, act="+"):
    if act == "+":
        print(num1 + num2)
    elif act == "-":
        print(num1 - num2)
    elif act == "*":
        print(num1 * num2)
    elif act == "/":
        print(num1 / num2)
    else :
        print("잘못된 연산기호입니다.")

num1 = int(input("정수1 : "))
num2 = int(input("정수2 : "))
calc(num1, num2)
calc(num1, num2, "*")
calc(num1, num2, "^")"""


"""def calc(num1, num2, act="+"):
    if act == "+":
        print(num1 + num2)
    elif act == "-":
        print(num1 - num2)
    elif act == "*":
        print(num1 * num2)
    elif act == "/":
        print(num1 / num2)
    else :
        print("잘못된 연산기호입니다.")


def calc(num2, num1, act="+"):
    if act == "+":
        print(num1 + num2)
    elif act == "-":
        print(num1 - num2)
    elif act == "*":
        print(num1 * num2)
    elif act == "/":
        print(num1 / num2)
    else :
        print("잘못된 연산기호입니다.")

num1 = int(input("정수1 : "))
num2 = int(input("정수2 : "))
calc(num1, num2, "*")
calc(num1=num1, num2=num2, act="*")
calc(num2=num2, num1=num1, act="*")"""


"""def vsum(*num):
    sum = 0
    for i in num:
        sum = sum + i
    return sum

print(vsum(2, 3))
print(vsum(2, 3, 4))
print(vsum(2, 3, 4, 5))"""


"""col = int(input("가로 : "))
row = int(input("세로 : "))
turtle.forward(col)
turtle.right(90)
turtle.forward(row)
turtle.right(90)
turtle.forward(col)
turtle.right(90)
turtle.forward(row)
str = "가로" + str(col) + "세로" + str(row) + "인 사각형의 넓이 =" + str(col*row)
turtle.write(str)
time.sleep(1)"""


"""radius = int(input("반지름 : "))
turtle.circle(radius)
str = "반지름" + str(radius) + "인 원의 넓이=" + str(3.14*radius*radius)
turtle.write(str)
time.sleep(1)"""




