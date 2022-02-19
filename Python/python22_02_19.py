#파이썬 기초 문법

#딕셔너리 - 값의 집합인 자료형

#딕셔너리 기본 출력문
dic1 = {"apple":"사과", "bird":"새", "bug":"벌레"}  #보통 중괄호를 이용한 딕셔너리 문법이 쓰임
print(dic1)

dic2 = dict(apple = "사과", bird = "새", bug = "벌레")
print(dic2)

dic = {}

dic["apple"] = "사과"
dic["fruits"] = ["바나나", "딸기", "오렌지"] #리스트도 값이 될 수 있음
print(dic)

dic_a={'programming':['c','python','java'],'cprogrammin':['c','c#','c++']}
dic_a["pyprogramming"]="python++, python"
print(dic_a)
del dic_a['programming']
print(dic_a)


#value는 어느 값이든 저장 가능
dic_a[True] = [1, 10, 100] 
dic_a["nums"] = {"one":{1,2,3,4}, "two":2}
print(dic_a)


#딕셔너리 메서드 활용
dic_b={'int':[1,2,3,4,5],'float':[1.1,1.2,1.3,1.4,1.5],'complexer':[1+1j,2+2j,3+3j,4+4j,5+5j]}
print(dic_b.keys()) #key값만 정렬
print(dic_b.values()) #valie값만 정렬
print(dic_b.items()) #튜플식으로 출력
print(dic_b)
print(dic_b.get("int",'x')) #해당 key가 존재 시 value값 출력 
print(dic_b.get("intint",'x')) #key가 없을 시 'x'문자 출력
print('int'in dic_b) #boolean형으로 출력