#파이썬 기초 문법

#문자열 포매팅 %키워드 포매팅
age=23
height=179
name="HyeonJun Park"
print("My name is %s, age is %d and height is %dcm "%(name,age,height))

#문자열 포매팅 .format메서드 포매팅
age_a=23
height_a=180
name_a="DaeHyeon Kim"
print("My name is {1}, age is {2} and height is {0}cm ".format(height_a,name_a,age_a))

#순서대로 하면 {}인덱스 값을 안 적어도 됨
age_a=23
height_a=180
name_a="DaeHyeon Kim"
print("My name is {}, age is {} and height is {}cm ".format(name_a,age_a,height_a))

str = " Hello goorm! I study Python.  "

#문자열 메서드
num = str.count(' ') #빈칸의 개수 #''안에 있는 문자를 카운트 공백도 포함
print("빈칸의 개수는 %d입니다." %num)
print("처음 등장하는 'l'의 인덱스 값은 %d입니다." %str.find('l')) 
print("Good day에서 처음 등장하는 'y'의 인덱스 값은 %d입니다." %"Good day".index('y'))

print("  ".join(str))#첫번째 요소를 문자열 사이사이에 삽입
print(str.upper()) #대문자로
print(str.lower()) #소문자로
print(str.lstrip()) #왼쪽 공백 삭제
print(str.rstrip()) #오른쪽 공백 삭제
print(str.replace('Python', 'C')) #첫번째 요소에 해당하는 문자를 두번째 요소로 바꿈
print(str.split()) #공백 기준 리스트 생성

#len()메서드 길이 출력
sentence = "I like studying Python" 
print(len(sentence), len("goorm"))