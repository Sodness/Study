#Basic Coding
#01
"""a = b = c = 1

def func():
    a = b = c = 2
    print("func:", a, b, c)

print("main", a, b, c)
func()
print("main", a, b, c)

main 1 1 1
func: 2 2 2
main 1 1 1"""

#02
"""a = b = c = 1

def func():
    global a, b, c
    a = b = c = 2
    print("func:", a, b, c)

print("main", a, b, c)
func()
print("main", a, b, c)

main 1 1 1
func: 2 2 2
main 2 2 2"""

#03
"""a = b = c = 1

def func1():
    a = b = c = 2

def func2():
    global a, b
    a = b = 3
    c = 3

print(a, b, c)
func1()
print(a, b, c)
func2()
print(a, b, c)

1 1 1
1 1 1
3 3 1"""

#04
"""res1 = 0
res2 = 0

def div_qr():
    global res1, res2
    num1 = int(input("정수1 : "))
    num2 = int(input("정수2 : "))
    res1 = num1 // num2
    res2 = num1 % num2

div_qr()
print("몫:", res1, "나머지:", res2)"""

#05
"""def div_qr():
    num1 = int(input("정수1 : "))
    num2 = int(input("정수2 : "))
    return (num1//num2, num1%num2)

(res1, res2) = div_qr()
print("몫:", res1, "나머지:", res2)"""

#06
"""data = [ 21, 7, 43, 65, 2, 8, 72, 52, 9 ]
for i in range(len(data)):
    print(data[i], end=" ")"""

#07
"""data = [ 21, 7, 43, 65, 2, 8, 72, 52, 9 ]
for i in range(len(data)-1, -1, -1):
    print(data[i], end=" ")"""

#08
"""data = [ [21, 7, 43, 65],
         [2, 8, 72, 52] ]
for i in range(len(data)):
    for j in range(len(data[0])):
        print(data[i][j], end=" ")
    print()"""

#09
"""import turtle as t

default_shape = [ "arrow", "turtle", "circle",
                  "square", "triangle", "classic" ]
user_shape = [ "7s0.gif", "7s1.gif", "7s2.gif" ]

t.delay(1000)
for i in default_shape:
    t.shape(i)
    t.delay(1000)

for i in user_shape:
    screen = t.Screen()
    screen.addshape(i)
    t.shape(i)
    t.delay(1000)"""

#10
"""import turtle as t

def key_p():
    t.clear()
    t.goto(0, 0)
    t.write("Python")

def key_h():
    t.clear()
    t.goto(0, 0)
    t.write("Hello")

def key_c():
    t.clear()

s = t.Screen()
t.hideturtle()
s.onkey(key_p, "p")
s.onkey(key_h, "h")
s.onkey(key_c, "c")

t.listen()
t.mainloop()"""
























