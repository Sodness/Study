# p.35 class
"""
class Man:
    def __init__(self, name):
        self.name = name
        print("Initialized!")

    def hello(self):
        print("Hello " + self.name + "!")

    def goodbye(self):
        print("Good-bye " + self.name + "!")


m = Man("David")
m.hello()
m.goodbye()
"""




# p.36 넘파이
"""
import numpy as np

x = np.array([1.0, 2.0, 3.0])
print(x)
print(type(x))
print()

y = np.array([2.0, 4.0, 6.0])
print(x+y)
print(x-y)
print(x*y)
print(x/y)
print()

print(x/2.0)
print()

A = np.array([[1, 2], [3, 4]])
print(A)
print(A.shape)
print(A.dtype)
print()

B = np.array([[3, 0], [0, 6]])
print(A+B)
print(A*B)
print(A*10)
print()
"""




# p.39 브로드캐스트
"""
import numpy as np

A = np.array([[1,2], [3,4]])
B = np.array([10,20])
print(A*B)
print()

X = np.array([[51,55], [14,19], [0,4]])
print(X)
print(X[0])
print(X[0][1])
print()

for row in X:
    print(row)
print()

X = X.flatten()
print(X)
print(X[np.array([0,2,4])])
# print(X[0,2,4]) 이건 안되네
print(X[0], X[2], X[4])
print(X[[True, False, True, False, True, False]]) # 이렇게 하는건 되네 밑에 예제 따라서 해본건데
# print(X[[True, True, True]]) 이건 오류나네 뒤는 알아서 True나 False로 채울 줄 알았더니
print()

print(X > 15)
print(X[X>15])
"""




# matplotlib
"""
import numpy as np
import matplotlib.pyplot as plt

x = np.arange(0, 6, 0.1)
y = np.sin(x)

#plt.plot(x, y)
#plt.show()

a = np.arange(0, 6, 1)
b = np.sin(a)

#plt.plot(a, b)
#plt.show()

a = np.arange(0, 6, 1)
b = np.arange(0, 6, 1)

#plt.plot(a, b)
#plt.show()

x = np.arange(0, 6, 0.1)
y1 = np.sin(x)
y2 = np.cos(x)

plt.plot(x, y1, label="sin")
plt.plot(x, y2, linestyle="--", label="cos")
plt.xlabel("x")
plt.ylabel("y")
plt.title("sin & cos")
plt.legend()
plt.show()
"""




# p.44 이미지 표시
"""
import matplotlib.pyplot as plt
from matplotlib.image import imread

img = imread('밴댕이.jpg')
plt.imshow(img)
plt.show()
"""




