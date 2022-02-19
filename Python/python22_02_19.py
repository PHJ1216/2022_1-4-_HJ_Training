#파이썬 기초 문법

#집합(set) - 중복과 순서가 없음

#집합 메서드

s1 = set([2,4,6,8,10]) 
s2 = set([1,2,3,4,5,6,7,8])

interset = s1 & s2 #교집합
print(interset)
print(s1.intersection(s2)) #함수 사용
print(s1) #s1의 값이 바뀌는 것이 아님

uniset = s1 | s2 #합집합
print(uniset)
print(s1.union(s2)) #함수 사용

difset1 = s1 - s2 #어떤 집합에서 어떤 집합을 빼느냐에 따라 다른 결괏값
difset2 = s2 - s1
print(difset1)
print(difset2)

#집합 메서드 - 삽입 및 삭제
set1 = {1, 2, 3, 4}

set1.add("hello")
print(set1)

set1.add((1,2,3)) #add() 사용 시 튜플/문자열은 값 하나로 인식
print(set1)

set1.update(['a', 'b', 'c']) #set()과 같이 여러 값을 한 요소로 저장
set1.update((11,12))
print(set1)

set1.update("zyx") #set1.add("hello")와의 차이
print(set1)

set1.remove("hello") #하나의 값만 제거 가능
print(set1)