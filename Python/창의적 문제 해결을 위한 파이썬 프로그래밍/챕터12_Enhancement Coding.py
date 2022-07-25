#Enhancement Coding
#01
"""def gcd(m, n):
    if m < n:
        (m, n) = (n, m)
    if n == 0:
        return m
    else:
        return gcd(n, m % n)
num1 = int(input("정수1 : "))
num2 = int(input("정수2 : "))
gcd_num = gcd(num1, num2)
print("GCD :", gcd_num)"""

#02
"""def igcd(m, n):
    if m < n:
        (m, n) = (n, m)
    while n != 0:
        (m, n) = (n, m % n)
    return m
num1 = int(input("정수1 : "))
num2 = int(input("정수2 : "))
gcd_num = igcd(num1, num2)
print("GCD :", gcd_num)"""

#03
"""import random

n1 = random.randint(1, 100)
n2 = random.randint(1, 100)
cal = random.randint(1, 4)

if cal == 1:
    print("%d + %d = "%(n1, n2), end="")
    user = int(input())
    if n1+n2 == user:
        print("올바른 답입니다.")
    else:
        print("답은 %d입니다."%(n1+n2))
elif cal == 2:
    print("%d - %d = "%(n1, n2), end="")
    user = int(input())
    if n1-n2 == user:
        print("올바른 답입니다.")
    else:
        print("답은 %d입니다."%(n1-n2))
elif cal == 3:
    print("%d * %d = "%(n1, n2), end="")
    user = int(input())
    if n1*n2 == user:
        print("올바른 답입니다.")
    else:
        print("답은 %d입니다."%(n1*n2))
elif cal == 4:
    print("%d / %d = "%(n1, n2), end="")
    user = int(input())
    if n1/n2 == user:
        print("올바른 답입니다.")
    else:
        print("답은 %d입니다."%(n1/n2))"""

#04
"""import random
rnum = random.randint(1, 100)
cnt = 0
while True:
    num = int(input("수 입력 : "))
    if rnum < num:
        print("%d은(는) 큽니다."%num)
    elif rnum == num:
        print("%d이(가) 일치합니다."%num)
        print("%d회 만에 숫자를 맞추었습니다."%cnt)
        break
    elif num == -1:
        print("게임을 종료합니다.")
        break
    else:
        print("%d은(는) 작습니다."%num)
    cnt = cnt + 1"""

#05
"""money1 = 30000000
rate = 3.4
money2 = 30000000 * 0.0034
day_rate = 3.4 / 365
day_money = 30000000 * day_rate / 100
print("원금 : %s원"%(format(money1, ",")))
print("이율(년) : %2.1f%%"%rate)
print("기간(년) : 1")
print("이자(년) : %s"%(format(int(money2), ",")))
print("이율(일) : %f%%"%day_rate)
print("이자(일) : %s원"%int(day_money))"""

#06
"""import random
import turtle as t

t.screensize(500, 400)
for i in range(50):
    x = random.randint(-50, 50)
    y = random.randint(-50, 50)
    t.goto(x, y)"""

#07
"""import turtle as t
import math

t.goto(0, 130)
t.goto(0, -130)
t.goto(0, 0)
t.goto(360, 0)
t.goto(0, 0)
for i in range(360):
    t.goto(i, math.sin(math.pi*i / 180)*100)"""

#08
"""import turtle as t
import math

t.goto(0, 130)
t.goto(0, -130)
t.goto(0, 0)
t.goto(360, 0)
t.goto(0, 0)
for i in range(360):
    t.goto(i, math.cos(math.pi*i / 180)*100)"""

#09
"""import turtle as t

t.goto(150, 0)
t.goto(0, 0)
t.goto(0, 150)
for i in range(150):
    x = i
    y = i**2 + 1
    t.goto(x, y*0.01)"""

#10
"""def solve(k, sum):
    global end
    global scale
    global chk

    if end == 1:
        return
    if sum == k:
        for i in range(2, 0, -1):
            for j in range(0, 7):
                if (chk[j] == i):
                    print(scale[j], "", end="")
            if (i == 2):
                print(": ", end="")
        end = 1

    for i in range(0, 7):
        if chk[i] == 0:
            chk[i] = 1
            solve(k, sum + scale[i])
            chk[i] = 2
            solve(k + scale[i], sum)
            chk[i] = 0


end = 0
scale = [1, 3, 9, 27, 81, 243, 729]
chk = [0, 0, 0, 0, 0, 0, 0]

weight = int(input("무게 : "))

if (weight > 0 and weight < 1000):
    print(weight, "", end="")
    solve(weight, 0)
else:
    print("무게는 1~999를 입력해 주세요.")"""
















