#Enhancement Coding
#01
"""str = input("문자열 : ")
while True:
    ch = input("문자 : ")
    if ch == "":
        break
    elif ch in str:
        print("문자 " + ch + "가 문자열 " + str + "에 존재함")
    else:
        print("문자 " + ch + "가 문자열 " + str + "에 존재하지 않음")"""

#02
"""def str2int(str):
    if str.isdigit():
        return int(str)
    else:
        return None

str = input("문자열 : ")
print(str2int(str))"""

#03
"""def func(str):
    global list
    cmd = str.split()
    if cmd[0] == "append":
        list.append(int(cmd[1]))
    elif cmd[0] == "insert":
        list.insert(int(cmd[1]), int(cmd[2]))

list = [1, 2, 3]
print(list)
str = input("리스트 명령 : ")
func(str)
print(list)"""

#04
"""def func(str):
    global list
    cmd = str.split()
    if cmd[0] == "append":
        list.append(int(cmd[1]))
    elif cmd[0] == "insert":
        list.insert(int(cmd[1]), int(cmd[2]))
    elif cmd[0] == "remove":
        list.remove(int(cmd[1]))
    elif cmd[0] == "sort":
        list.sort()
    elif cmd[0] == "printout":
        print(list)

list = []
num = int(input("리스트 명령 수 : "))
for i in range(num):
    str = input()
    func(str)"""

#05
"""import time

str = input("주민등록번호 년월일 : ")
now = time.localtime()
age = now.tm_year - (int(str[0:2]) + 1900) + 1
print("나이 :", age)"""

#06
"""str = input("주민등록번호 년월일 : ")
month = int(str[2:4])
day = int(str[4:6])

if 1 <= month and month <= 12:
    if 1 <= day and day <= 31:
        sex = input("성별 표시 : ")
        print(str + "-" + sex)
    else:
        print("주민등록번호의 일 형식이 잘못되었습니다.")
else:
    print("주민등록번호의 월 형식이 잘못되었습니다.")"""

#07
"""mfd = { 9:1800, 0:1800,
        1:1900, 2:1900,
        3:2000, 4:2000,
        5:1900, 6:1900,
        7:2000, 8:2000 }
str = input("주민등록번호 년월일 : ")
sex = int(input("성별 표시 : "))
print("%d년대 태어난 "%mfd[sex], end="")
if sex % 2 == 1:
    print("남성 입니다.")
else:
    print("여성 입니다.")"""

#08
"""data = [ "Python", "C", "Java", "C++", "Swift", "R" ]
data[data.index("Swift")] = "Objective-C"
data.insert(data.index("Java"), "C#")
data.remove("R")
print(data)"""

#09
"""import turtle as t

rx = []
ry = []
move_cnt = 0

def clicked(x, y):
    global move_cnt
    move_cnt += 1
    rx.append(x)
    ry.append(y)

def key_d():
    for i in range(len(rx)):
        t.goto(rx[i], ry[i])

s = t.Screen()
s.onscreenclick(clicked)
s.onkey(key_d, "d")
s.listen()
t.mainloop()"""

#10
"""ISSN = input("ISSN 8자리(- 제외) : ")
sum = int(ISSN[0]) * 8 + int(ISSN[1]) * 7 + int(ISSN[2]) * 6 +\
      int(ISSN[3]) * 5 + int(ISSN[4]) * 4 + int(ISSN[5]) * 3 +\
      int(ISSN[6]) * 2
print("ISSN 1~7자리의 가중치 반영 합계 :", sum)
check = 11 - (sum % 11)
print("ISSN 1~7자리의 체크 기호 값 :", check)

if check == int(ISSN[7]):
    print("ISSN 코드 : " + ISSN + "은(는) 검증되었습니다.")
else:
    print("ISSN 코드 : " + ISSN + "은(는) 검증되지 않았습니다.")"""





















