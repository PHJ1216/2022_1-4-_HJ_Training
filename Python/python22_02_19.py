#파이썬 기초 문법

#집합(set) - 중복과 순서가 없음

#문자열, 리스트, 딕셔너리, 튜플, 집합 자유로운 자료형 변환
str = "Hello goorm!!!" #문자열 
print(str, type(str))

s0 = set(str)           
print(s0, type(s0))

l = ['a', 'a', 'c', "goorm", "hello", 10, 30, 30] #리스트
print(l, type(l))

s1 = set(l) 
print(s1, type(s1))

d = {"Anna":25, "Bob": 23} #딕셔너리
print(d, type(d))

s2 = set(d)
print(s2, type(s2))

t = (190,)              #튜플
print(t, type(t))

s3 = set(t) 
print(s3, type(s3))

#문자열, 리스트, 딕셔너리, 튜플, 집합 자료형 변환
str = "Hello goorm!!!"
print(str, type(str))

s0 = set(str) 
print(s0, type(s0))

newstr = tuple(s0)
print(newstr, newstr[4], newstr[5:], type(newstr)) #인덱싱, 슬라이싱 가능

l = [1,2,3,4,5,6,7,8]
print(l, type(l))

s1 = set(l)
print(s1, type(s1))

newlist = list(s1)
print(newlist, newlist[4], newlist[:-5], type(newlist))