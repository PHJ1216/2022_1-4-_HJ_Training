#파이썬 기초 문법

#반복문 - while문

from turtle import st


jogigng_km=0

while jogigng_km!=5:
    jogigng_km+=1
    print("현재 km : ",jogigng_km,"km입니다.")


numbers = [] #빈 리스트 생성
num = 2

while num <= 30:
    numbers.append(num) #리스트에 값을 추가하는 메서드
    num += 2
    
print(numbers)

#반복문 - for문
num_t=[]
for i in range(1,10,1):
    num_t.append(i)
print(num_t)

#for문 활용
dic = {"human":"사람", "dog" : "강아지", "carrot" : "당근"}

oddnums = (1, 3, 5, 7, 9)
evennums = [6, 8, 10, 22, 50]
str = "Hello goorm!"

for i in oddnums :
    print(i, end = ' ')  #end 용법 : 출력시 개행하지 않고 공백 후 이어서 출력
print(type(oddnums))
    
for i in evennums :
    print(i, end = ' ')
print(type(evennums))

for i in str :  
    print(i , end = ' ')
print(type(str))

for key, val in dic.items() : #딕셔너리에 접근할 때는 items()메서드 사용
    print(key, val, end = ' ')
print(type(dic))

# 리스트 for문 활용
nums1 = [[1, 2, 3], [4, 5, 6], ['a', 'b', 'c']]
nums2 = [(1,2), (3, 4)]

for i, j, k in nums1 :
    print(i, j, k)

print()

for i, j in nums2 :
    print(i, j) 

#딕셔너리 for문 활용
fruits = {"apple" : "red", "banana" : "yellow", "grape" : "purple", "melon" : "green"}

for color in fruits.values(): #value값들 출력  color는 하나의 변수
    print(color, end = ' ')
print()

for fruit in fruits.keys(): #key값들 출력  fruit은 하나의 변수
    print(fruit, end = ' ')
print()

for fruit, color in fruits.items():
    print("%s의 색은 %s" %(fruit, color), end = ', ')  #변수 대입

