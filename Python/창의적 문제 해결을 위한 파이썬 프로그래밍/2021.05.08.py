# Basic Coding
# 01
"""str = input("문자열 : ")
print("문자열 길이 : ", len(str))
print("첫 번째 문자 : ", str[0])
print("두 번째 문자 : ", str[1])
print("마지막 문자 : ", str[len(str)-1])"""


#02
"""str = input("문자열 : ")

print("개별 문자 출력 :", end="")
for i in range(len(str)):
    print(str[i], end="")

print()
print("역순 개별 문자 출력 :", end="")
for i in range(len(str)-1, -1, -1):
    print(str[i], end="")"""


#03
"""while True:
    score = int(input("점수 : "))
    if score < 0 or 100 < score:
        print("입력 가능한 정수 범위는 0~100입니다.")
    elif 90 <= score and score <= 100:
        print(score, ": A")
    elif 80 <= score and score <= 89:
        print(score, ": B")
    elif 70 <= score and score <= 79:
        print(score, ": C")
    elif 60 <= score and score <= 69:
        print(score, ": D")
    elif 0 <= score and score <= 59:
        print(score, ": F")"""


#04
"""deg = { 10:'A', 9:'B', 8:'B', 7:'C', 6:'D', 5:'F', 4:'F', 3:'F', 2:'F', 1:'F', 0:'F' }
while True:
    score = int(input("점수 : "))
    if score < 0 or 100 < score:
        print("입력 가능한 정수 범위는 0~100입니다.")
    else:
        print(score, ":", deg[score//10])"""


#05
"""items = { "라면":650, "우유":1100, "콜라":1200, "캔커피":500, "과자":700 }
sum = 0
while True:
    product = input("제품명 : ")
    if product == "":
        break
    elif product in items:
        sum = sum + items[product]
        print("[%s:%d] > %d" % (product, items[product], sum))
    else:
        print(product, "는 미등록 제품입니다.")

print("총 금액 :", sum)"""


#06
"""import time

for i in range(1, 6):
    print(i)
time.sleep(1)"""


#07
"""import math

def ceil(x):
    return math.ceil(x)

def floor(x):
    return math.floor(x)

def trunc(x):
    return math.trunc(x)

num = float(input("실수 : "))
print(num, ":", ceil(num))
print(num, ":", floor(num))
print(num, ":", trunc(num))"""


#08
"""from math import sqrt

num = int(input("정수 : "))
print(float(num), ":", sqrt(num))"""


#09
"""import turtle as t


def write_xyleft(x, y):
    t.goto(x, y)
    t.write("x:%d, y:%d - 마우스 왼쪽 버튼 클릭"%(x, y))

def write_xyright(x, y):
    t.goto(x, y)
    t.write("x:%d, y:%d - 마우스 오른쪽 버튼 클릭"%(x, y))


window = t.Screen()
t.penup()

window.onclick(write_xyleft, btn=1)
window.onclick(write_xyright, btn=3)
window.listen()
t.mainloop()"""


"""import turtle as t
import time

def write_xyleft(x, y):
    t.goto(x, y)
    t.write("x:%d, y:%d - 마우스 왼쪽 버튼 클릭"%(x,y))

def write_xyright(x, y):
    t.goto(x, y)
    t.write("x:%d, y:%d - 마우스 오른쪽 버튼 클릭"%(x,y))


t.setup(600, 300)
s = t.Screen()
t.penup()

s.onscreenclick(write_xyleft, 1)
s.onscreenclick(write_xyright, 3)
s.listen()
t.mainloop()"""


#10
"""import turtle as t

def write_xy(x, y):
    t.goto(x, y)
    t.pendown()
    t.circle(20)
    t.penup()

def screen_clear(x, y):
    t.clear()

window = t.Screen()
t.penup()

window.onscreenclick(write_xy, btn=1)
window.onscreenclick(screen_clear, btn=3)
window.listen()
t.mainloop()"""
















