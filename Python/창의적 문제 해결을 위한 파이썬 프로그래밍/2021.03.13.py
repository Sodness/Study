"""sum = 0
for i in [1, 3, 5, 7, 9]:
    sum = sum + i
    print(i, sum)"""


"""for i in ["국어", "영어", "수학", "과학", "한국사"]:
    print(i, end=" ")"""

"""name = ["홍길동", "임꺽정"]
subject = ["국어", "영어", "수학"]
for i in name:
    for j in subject:
        print(i, j)"""

"""sum = 0
for i in range(1, 101):
    sum = sum + i
print(sum)"""


"""sum1 = 0
sum2 = 0
for i in range(1, 101):
    if i % 2 == 1:
        sum1 = sum1 + i
    else:
        sum2 = sum2 + i
print("홀수 합 :", sum1)
print("짝수 합 :", sum2)"""


"""sum = 0
for i in range(3, -4, -1):
    print(i, end=" ")
    sum = sum + i
print()
print(sum)"""


"""sum = 0.0
for i in range(1, 11):
    sum = sum + 1/i
    print(sum)"""


"""sum = 0.0
for i in range(1, 11):
    sum = sum + i/(i+1)
    print(sum)"""


"""sum = 0.0
for i in range(1, 11):
    if i % 2 == 1:
        sum = sum + 1/i
        print(sum)
    else:
        sum = sum - 1/i
        print(sum)"""


"""num = int(input("단 : "))
if 2 <= num < 10:
    for i in range(1, 10):
        print(num, "*", i, "=", num*i)"""


"""for i in range(1, 6):
    for j in range(1, 5):
        print(j, end="")
    print("")"""

"""for i in range(1, 6):
    for j in range(1, 5):
        print("*", end="")
    print("")"""


"""for i in range(1, 6):
    for j in range(1, 5):
        print(j+i-1, end="")
    print("")"""


"""sum = 0
while True:
    n = int(input("정수 : "))
    if n == 0:
        break;
    sum = sum + n
print("합 :", sum)"""


"""pw = ""
while pw != "pwpass":
    pw = input("비밀번호 : ")
print("LogIn Pass!!")"""


"""sum = 0
while True:
    n = int(input("정수 : "))
    if 0 < n:
        sum = sum + n
    elif n < 0:
        continue
    else:
        break
print("합 :", sum)"""


import turtle, time

"""for i in range(3):
    turtle.shape("turtle")
    turtle.circle(50)
    turtle.right(120)
time.sleep(1)"""


"""for i in range(6):
    turtle.shape("turtle")
    turtle.circle(50)
    turtle.right(60)
time.sleep(1)"""


"""for i in range(3):
    turtle.shape("turtle")
    turtle.circle(50)
    turtle.up()
    turtle.forward(50)
    turtle.down()"""


"""for i in range(3):
    turtle.shape("turtle")
    turtle.circle(50)
    turtle.up()
    turtle.forward(100)
    turtle.down()"""


"""num = [8, 7, 3, 2, 9, 4, 1, 6, 5]
maxnum = num[0]
minnum = num[0]
for i in num:
    if maxnum < i:
        maxnum = i
    if minnum > i:
        minnum = i
print("최댓값 :", maxnum)
print("최솟값 :", minnum)"""


"""for i in range(1, 6):
    print(i, 6-i)"""


"""for i in range(10, 21):
    print(i, i*9/5+32)"""

"""for i in range(10, 21):
    print(i, (i-32)*5/9)"""

"""for i in range(0, 101, 10):
    print(i, i*9/5+32, i+273.15)"""

"""for i in range(1, 6):
    for j in range(1, i+1):
        print("*", end="")
    print()"""


"""n = int(input("밑변, 높이 : "))
for i in range(1, n+1):
    for j in range(1, i+1):
        print("*", end="")
    print()"""


"""for i in range(1, 6):
    for j in range(1, 6-i):
        print(" ", end="")
    for k in range(1, i+1):
        print("*", end="")
    for k in range(1, i):
        print("*", end="")
    print()"""


"""s = int(input("시작 : "))
h = int(input("높이 : "))
for i in range(1, h+1):
    for j in range(1, i+1):
        print((s+j-1)%10, end="")
    print()"""


"""s = int(input("시작 : "))
h = int(input("높이 : "))
for i in range(1, h+1):
    for j in range(1, h+1-i):
        print(" ", end="")
    for k in range(1, i+1):
        print((s+k-1)%10, end=" ")
    print()"""


"""s = int(input("시작 : "))
h = int(input("높이 : "))
for i in range(1, h+1):
    for j in range(1, h+1-i):
        print(" ", end="")
    for k in range(1, i+1):
        print((s+i-1)%10, end=" ")
    print()"""


"""num = int(input("단 : "))
if 2 <= num <= 8:
    for i in range(1, 10):
        print(num, "*", i, "=", num*i, num+1, "*", i, "=", (num+1)*i)
elif num == 9:
    for j in range(1, 10):
        print(num, "*", j, "=", num * j)"""


"""sum = 1
cnt = 1
while sum < 100000:
    print(cnt, "번 접으면", sum*2, "mm")
    sum = sum * 2
    cnt += 1
print("횟수 :", cnt, "두께 :", sum)"""


"""radius = int(input("반지름 : "))
rotatecnt = int(input("회전 횟수 : "))
for i in range(rotatecnt):
    turtle.shape("turtle")
    turtle.circle(radius)
    turtle.right(360/rotatecnt)
time.sleep(1)"""


"""radius = int(input("반지름 : "))
rotatecnt = int(input("횟수 : "))
distance = int(input("이동 : "))
turtle.shape("turtle")
for i in range(rotatecnt):
    turtle.circle(radius)
    turtle.up()
    turtle.forward(radius*distance)
    turtle.down()
time.sleep(1)"""












