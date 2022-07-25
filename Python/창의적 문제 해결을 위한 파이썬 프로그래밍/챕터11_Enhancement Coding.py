#Enhancement Coding
#01
"""primelist = [ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
              31, 37, 41, 43, 47, 53, 59, 61, 67,
              71, 73, 79, 83, 89, 97 ]

def factor(n):
    result=[]
    for i in primelist:
        count=0
        while n % i == 0:
            count = count + 1
            n = int(n / i)
        if count != 0:
            result.append((i, count)) # (소수, 개수)
        if n == 1:
            break
    return result

num = int(input("소인수분해할 숫자 : "))
rst = factor(num)
print(num, "의 소인수분해 =", rst)"""

#02
"""primelist = [ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
              31, 37, 41, 43, 47, 53, 59, 61, 67,
              71, 73, 79, 83, 89, 97 ]

def factor(n):
    result=[]
    for i in primelist:
        count=0
        while n % i == 0:
            count = count + 1
            n = int(n / i)
        if count != 0:
            result.append((i, count)) # (소수, 개수)
        if n == 1:
            break
    return result

num = int(input("소인수분해할 숫자 : "))
rst = factor(num)
print(num, "의 소인수분해 =", rst)
sum = 1
for i in range(len(rst)):
    sum = sum * rst[i][0] ** rst[i][1]
    if i < len(rst)-1:
        print("%d**%d + "%(rst[i][0], rst[i][1]), end="")
    elif i == len(rst)-1:
        print("%d**%d = %d"%(rst[i][0], rst[i][1], sum))"""

#03
"""import turtle as t

t.speed(0)
for i in range(3, 19):
    for j in range(i):
        t.forward(70)
        t.right(-360/i)
t.mainloop()"""

#04
"""import turtle as t

t.speed(0)
R = 0
G = 0
B = 255
t.colormode(255)

for i in range(18, 2, -1):
    t.color(R, G, B)
    t.fillcolor(R, G, B)
    t.begin_fill()
    for j in range(i):
        t.forward(70)
        t.right(-360/i)
    t.end_fill()
    G += 17
    B -= 17
t.mainloop()"""

#05
"""import turtle as t

t.speed(0)
for i in range(60):
    t.circle(120)
    t.right(360/60)
t.mainloop()"""

#06
"""import turtle as t

R = 255
G = 0
B = 0
t.speed(0)
t.colormode(255)
for i in range(60):
    t.color(R, G, B)
    t.circle(120)
    t.right(360/60)
    R -= 4
    G += 4
t.mainloop()"""

#07
"""import turtle as t

t.speed(0)
t.bgcolor("gray")
for x in range(360):
    if x % 3 == 0:
        t.color("red")
    elif x % 3 == 1:
        t.color("yellow")
    elif x % 3 == 2:
        t.color("blue")
    t.forward(x*2)
    t.left(120)"""

#08
"""import turtle as t

t.speed(0)
t.bgcolor("gray")
for x in range(360):
    if x % 3 == 0:
        t.color("red")
    elif x % 3 == 1:
        t.color("yellow")
    elif x % 3 == 2:
        t.color("blue")
    t.forward(x*2)
    t.left(119)"""

#09
"""import turtle as t
import math

cnt = 0
x1 = y1 = 0

def clicked(x, y):
    global cnt
    global x1, y1
    if cnt == 0:
        t.penup()
        t.goto(x, y)
        t.write(x, y)
        x1 = x
        y1 = y
        cnt += 1
    elif cnt == 1:
        t.pendown()
        t.goto(x, y)
        length = math.sqrt(math.pow((x - x1), 2) + math.pow((y - y1), 2))
        slope = (y - y1) / (x - x1)
        str = "(%d, %d) 거리:%f, 경사:%f" % (x, y, length, slope)
        t.write(str)
        cnt = 0

s = t.Screen()
s.onscreenclick(clicked)
s.listen()
t.mainloop()"""

#10
"""import turtle as t

changecolor = 0

def colorSquare(x, y):
    global changecolor
    if changecolor == 0:
        t.color(255, 0, 0)
        changecolor = 1
    elif changecolor == 1:
        t.color(0, 255, 0)
        changecolor = 2
    elif changecolor == 2:
        t.color(0, 0, 255)
        changecolor = 0
    t.penup()
    t.goto(x, y)
    t.pendown()
    for i in range(4):
        t.forward(50)
        t.right(90)

s = t.Screen()
t.colormode(255)
s.onscreenclick(colorSquare)
s.listen()
t.mainloop()"""

















