#파이썬 기초 문법

#리스트  값의 집합
oddnumber = [1, 3, 5, 7, 9]
cafes = ['star', 'bene', 'yoger', 'friends']
A = [1, 5, 'A', 'CC', 'B']
listInList = [[1, 3, 5, 6, 7], cafes, oddnumber, 1, 3, 'Abc']

a = oddnumber[1:5]
b = cafes[1:]
c = A[:2]
d = listInList[0][1:4] #리스트 내 리스트 접근

print(a)
print(b)
print(c)
print(d)

#리스트 연산

num1 = [1, 2, 3, 4, 5]
num2 = [6, 7, 8, 9, 10]

numbers = num1 + num2
print(numbers)
print(numbers * 2)  

#리스트 수정

number = [2, 4, 6, 8, 10, 1, 3, 5, 7, 9]

number[4] = 100
print(number)

number[2] = "hello"
print(number)

number[0] = number[9] #인덱스 9를 인덱스 0에 대입
print(number)

number[8] = ['a', 'b', 'c'] #리스트 전체를 형태 유지하며 대입
print(number)

number[:] = [1,'a']  #요소들을 갈아치움
print(number)  

arr=[1,2,3,4,5]

arr[3]=""
print(arr)

del arr[1]
print(arr)

