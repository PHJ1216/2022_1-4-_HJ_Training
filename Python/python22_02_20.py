#파이썬 기초 문법

#함수 문법

# 매개변수 - 가변 인자 함수 선언법 def f(x)_name(*매개변수) 언제든지 많은 변수를 대입가능
def num_plus(*t) :
    print(t, type(t)) #튜플인지 확인
    total = 0
    
    for i in t :
        total = total + i
    
    return total

print(num_plus(1, 5, 32, 3, 4, 57, 5))

# 매개변수 - 키워드 매개변수 def f(x)_name(**매개변수) 딕셔너리 형식으로 사용 가능
def func(**kwargs) :
    print(kwargs)
    
num = 10
func(apple="사과", a = num, num = 4)

# 가변 인자 함수 선언법이랑 키워드 매개변수를 같이 선언 할 수 있다

def func(*nums, **kwargs) :
    print(nums)
    print(kwargs)
    
num = 10
func(1, 3, 5, 7, apple="사과", a = num,  num = 4) #정확하게 구분되어 있어야함 
