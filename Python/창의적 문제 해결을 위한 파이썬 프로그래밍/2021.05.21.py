#Basic Coding
#01
"""i = 20
print("#123456789#")
print("#%d#"%i)
print("#%-d#"%i)
print("#%9d#"%i)
print("#%-9d#"%i)

#123456789#
#20#
#20#
#       20#
#20       #"""

#02
"""f = 3.141592
print("#123456789#")
print("#%f#"%f)
print("#%-f#"%f)
print("#%9.3f#"%f)
print("#%9.1f#"%f)
print("#%-9.3f#"%f)
print("#%-9.1f#"%f)

#123456789#
#3.141592#
#3.141592#
#    3.142#
#      3.1#
#3.142    #
#3.1      #"""

#03
"""c = 'a'
s = "str"
print("#123456789#")
print("#%c#"%c)
print("#%s#"%s)
print("#%9s#"%s)
print("#%-9s#"%s)
print("#%9c#"%s[0])
print("#%-9c#"%s[1])

#123456789#
#a#
#str#
#      str#
#str      #
#        s#
#t        #"""

#04
"""jn = "980910-1234567"
print(jn[0:2], jn[2:4], jn[4:6])
print(jn[7])
print(jn[-1], jn[-3], jn[-5])"""

#05
"""str = "python"
for i in range(len(str)):
    print(str[0:i+1])"""

#06
"""str = "python"
for i in range(len(str)):
    print("%6s"%str[0:i+1])"""

#07
"""str = "python"
for i in range(len(str)-1, -1, -1):
    print(str[i:(len(str))])"""

#08
"""str1 = input("문자열1 : ")
str2 = input("문자열2 : ")
if len(str1) <= len(str2):
    print("긴 문자열 =", str2)
else:
    print("긴 문자열 =", str1)"""

#09
"""str = input("문자열 : ")
if str.isdigit():
    print("숫자로 구성된 문자열")
elif str.isalpha():
    print("문자로 구성된 문자열")
elif str.isalnum():
    print("숫자/문자로 구성된 문자열")"""

#10
"""data = []
while True:
    str = input("문자열 : ")
    if str == "":
        break
    else:
        data.append(str)

for i in range(len(data)):
    print(data[i], end=" ")"""
































