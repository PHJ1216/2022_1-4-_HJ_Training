#파이썬 기초 문법

#함수 문법

# 반환 값 - 파이썬은 반환 값이 여러 개일 떄 자동으로 튜플로 묶음

def calculator(a, b) :
    sum = a + b
    sub = a - b
    mul = a * b
    div = a / b
    return sum, sub, mul, div  #굳이 리스트로 안 묶어도 됨

print(calculator(10, 2))

# return은 반환에도 쓰이지만 정확히는 함수를 종료하는 의미가 더 큼

def division(a, b) :
	if b == 0 :
		return
	else :
		res = a / b
		
	print("division")
	return res

result = division(10, 0)  #None 값으로 출력
print(result)

result = division(10, 3)
print(result)