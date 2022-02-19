#파이썬 기초 문법

#튜플 - 리스트와 유사함 (수정할 수 없고 선언 방법 빼고는 유사)

t1=('a','b','c',1,2,3)
print(t1,t1[:4]) 

t2='a','b','c',1,2,3  #괄호 생량 가능
print(t2,t2[:4])

s1=list(set([1,2,3]))
print(s1)

t3=({'C':['c', 'c++', 'c#'],'front_end':['html','css','javascript']},{1,2,3},[1,2,3],(1,2,3),s1,3) #어떤 값도 가능
print(t3)

t3[0]['edit']="anything" #중요 : 튜플 요소가 Mutable하면 수정 가능
t3[2][2]="anything"   #리스트 크기는 변하기 않지만 대입은 가능
print(t3)

print(t1*t3[5])
t4='a','b','c',1,1,1,2,2,3,4,4,5
print(t4.index(1),t4.count(1))  #메서드 사용 가능

