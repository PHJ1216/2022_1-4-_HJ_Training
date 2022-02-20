#파이썬 기초 문법

#함수 문법

# 전역변수와 지역변수

def plusThree(num): #지역 변수 num
    num += 3

num = 3             #전역 변수 num
plusThree(num)
print(num)

num = 3 #전역 변수 num 선언
globallist = [] #전역 변수 globallist 선언

def mulNum(a) : #지역 변수 a 선언
    a = a * num
    globallist.append(3)  # 전역변수 == 값 형식의 값 대입은 불가능함
    return a #a 소멸

def subNum(a) : #지역 변수 a 선언
    a = a - num
    print(a) #a 소멸

res = mulNum(4) #전역 변수 res 선언
print(res)

subNum(7)
print(num)
print(globallist) #프로그램 종료, 전역 변수 num, res, globallist 소멸

#global 키워드를 이용한 함수안에서 전역변수 수정법
num = 1 #전역변수 선언

# 전역변수를 어쩔 수 없이 수정해야하는 경우 global키워드
def plusNum() :
	global num #전역변수를 함수 내에서 사용함을 선언 #global없을 시 오류
	num += 1
	print(num)

plusNum()
print(num)