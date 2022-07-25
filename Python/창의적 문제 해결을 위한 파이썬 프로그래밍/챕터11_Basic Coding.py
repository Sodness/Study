#Basic Coding
#01
"""def pow_xy(x, y):
    return x**y
n1 = int(input("정수1 : "))
n2 = int(input("정수2 : "))
print("%d**%d = %d"%(n1, n2, pow_xy(n1, n2)))"""

#02
"""def pow_xy2(x, y):
    res = 1
    for i in range(y):
        res = res * x
    return res
n1 = int(input("정수1 : "))
n2 = int(input("정수2 : "))
print("%d**%d = %d"%(n1, n2, pow_xy2(n1, n2)))"""

#03
"""import math

num = int(input("정수 : "))
print("sqrt(%d) = %f"%(num, math.sqrt(num)))
print("%d ** 0.5 = %f"%(num, (num**0.5)))"""

#04
"""import math

x1 = int(input("좌표1 x : "))
y1 = int(input("좌표1 y : "))
x2 = int(input("좌표2 x : "))
y2 = int(input("좌표2 y : "))
length = math.sqrt(math.pow((x2-x1),2) + math.pow((y2-y1),2))
slope = (y2-y1) / (x2-x1)
print("두 지점 간의 거리 =", length)
print("두 지점 간의 경사 =", slope)"""

#05
"""R = int(input("R (0~255) : "))
G = int(input("G (0~255) : "))
B = int(input("B (0~255) : "))
RGB = R*65536 + G*256 + B*1
print("RGB(%d, %d, %d) ="%(R, G, B), hex(RGB).upper())"""

#06
"""R = int(input("R (0~255) : "))
G = int(input("G (0~255) : "))
B = int(input("B (0~255) : "))
RGB = hex(R*65536 + G*256 + B*1).upper()[2:8]
print("RGB(%d, %d, %d) = #%s"%(R, G, B, RGB))"""

#07
"""str = input("Hex color code : ")
R = int(str[1:3], 16)
G = int(str[3:5], 16)
B = int(str[5:7], 16)
print("%s = RGB(%d, %d, %d)"%(str, R, G, B))"""

#08
"""import turtle as t
import random

def square(x, y):
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)

t.colormode(255)
t.color(255, 0, 0)
for i in range(10):
    x = random.randrange(-201, 201)
    y = random.randrange(-201, 201)
    square(x, y)"""

#09
"""import turtle as t
import random

def green_square(x, y):
    t.fillcolor(0, 255, 0)
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.begin_fill()
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.end_fill()

t.colormode(255)
t.color(255, 0, 0)
for i in range(10):
    x = random.randrange(-201, 201)
    y = random.randrange(-201, 201)
    green_square(x, y)"""

#10
"""import turtle as t

def square(x, y):
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.setheading(90)
    for i in range(4):
        t.forward(50)
        t.right(90)

s = t.Screen()
s.onscreenclick(square)
s.listen()
t.mainloop()"""






































