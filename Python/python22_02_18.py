#파이썬 기초 문법

#리스트 삽입 메서트
num_a = [2, 4, 6, 8, 10, 1, 3, 5, 7, 9]
print(num_a)

num_a.insert(3, [11, 12, 13])
print(num_a)

#append와 extend의 차이
num_a.extend(['a', 'b', 'c']) #extend()는 괄호가 풀리고 요소 대입
print(num_a)
num_a.append(['a', 'b', 'c']) #append()는 괄호 그대로 리스트 대입
print(num_a)

#리스트 삭제 메서드
num_b=[1,2,3,4,5,6,7,8,9]
num_b.remove(3) #처음 나온 값을 삭제
print(num_b)

print(num_b.pop()) #뒤에 있는 거 팝!
print(num_b)

#리스트 정렬 메서드
num_c1=[2,4,6,8]
num_c2=[1,3,5,7]
num_c3=num_c1+num_c2
print(num_c3)
num_c3.sort() #순서대로 정렬
print(num_c3)
num_c3.reverse() #반대로 뒤집음 말대로 리버스
print(num_c3) 

#리스트 정보 확인 메서드

num_d=[1,2,3,4,5,6,7,8]
num_d.index(8) # 전달인자가 리스트에 있으면 리스트 값 반환
print(num_d)
print(num_d.count(2)) # 전달인자가 리스트에 몇 개 있는지 카운트
print(len(num_d)) # 크기 출력

list1 = [2,5,2,0,1]
list2 = [4,1,2]

list1.append(list2)
print(list1, len(list1))