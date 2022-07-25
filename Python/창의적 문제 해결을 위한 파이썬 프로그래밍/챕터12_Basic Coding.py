#Basic Coding
#01
"""def rsum(n):
    if n <= 1:
        return 1
    else:
        return n + rsum(n - 1)
num = int(input("1 + ... + n, n : "))
print("1 + ... + %d = %d"%(num, rsum(num)))"""

#02
"""def rsum(n):
    sum = 0
    while 1 <= n:
        sum = sum + n
        n = n - 1
    return sum
num = int(input("1 + ... + n, n : "))
print("1 + ... + %d = %d"%(num, rsum(num)))"""

#03
"""import random

list = []
sum = 0
print("Random number : ", end="")
for i in range(10):
    list.append(random.randint(1, 100))
    sum = sum + list[i]
    print(list[i], end=" ")
print()
print("합 : %d, 평균 : %4.2f"%(sum, sum/10))"""

#04
"""import random

dice = random.randint(1, 6)
user = int(input("예상값 : "))
if user < 1 and 6 < user:
    print("1~6 숫자를 입력해주세요.")
elif user == dice:
    print("주사위 : %d - 맞추었습니다."%dice)
elif user != dice:
    print("주사위 : %d - 맞추지 못하였습니다."%dice)"""

#05
"""import random

n1 = random.randint(1, 100)
n2 = random.randint(1, 100)
sum = n1 + n2
print("%d + %d = "%(n1, n2), end="")
user = int(input())
if sum == user:
    print("올바른 답입니다.")
else:
    print("답은 %d입니다."%sum)"""

#06
"""import random

n1 = random.randint(1, 9)
n2 = random.randint(1, 9)
res = n1 * n2
print("%d * %d = "%(n1, n2), end="")
user = int(input())
if res == user:
    print("올바른 답입니다.")
else:
    print("답은 %d입니다."%res)"""

#07
"""val = float(input("값 : "))
print("%f => %.2f%%"%(val, val*100), end="")"""

#08
"""num = [ 33, 42, 14, 20, 5, 9, 30, 45, 90 ]
avg = sum(num) / len(num)
print(num, ", 평균 :", avg)
rate = int(input("초과 비율(%) : "))
val = avg * (1 + rate/100)
print("평균+초과 비율 값 %3.1f : "%val, end="")
for i in num:
    if val < i:
        print(i, end=" ")"""

#09
"""import turtle as t
import random

for i in range(20):
    x = random.randint(-200, 200)
    y = random.randint(-150, 150)
    t.penup()
    t.goto(x, y)
    t.dot(3)
t.mainloop()"""

#10
"""import turtle as t
import random

t.screensize(500, 400)
for i in range(20):
    x = random.randint(-200, 200)
    y = random.randint(-150, 150)
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.circle(10)
t.mainloop()"""

#11
"""import turtle as t
import math

for i in range(360):
    t.goto(i, math.sin(math.pi*i / 180)*100)"""

#12
"""import turtle as t
import math

t.penup()
t.goto(0, math.cos(math.pi*0 / 180)*100)
t.pendown()
for i in range(360):
    t.goto(i, math.cos(math.pi*i / 180)*100)"""































