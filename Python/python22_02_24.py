#파이썬 기초 문법

# 모듈 
# 1. 효율성 1-2. 용도에 따라 파일로 구분 1-3. 다른 파일에서 필요할 때 가져오기 
# 2. 타인의 코드를 나의 코드에 활용 가능 

import random

list = ['a', 'b', 'c', 'd']
a = random.random()
b = random.randrange(1, 10)
c = random.choice(list)
print(a,b,c)

"""모듈을 만들 때 우선 기능이 작동하는 실직적 코드를 메인코드와 같은 경로에 저장하고 import로 선언"""

#file 이름 : my_module.py 
def three_times(a): return a * 3  #기능 파일
def ten_times(a): return a * 10 
"""-------------------------------------------"""
import my_module                    #메인 파일
print(my_module.three_times(10)) #=> 30 
print(my_module.ten_times(10)) #=> 100
"""-------------------------------------------"""
from my_module import three_times
from my_module import ten_times  #from 모듈이름 import 모듈함수 형식으로 쓰면

print(three_times(10)) #=> 30    #기능을 쓸 때 편함
print(ten_times(10)) #=> 100

"""추가로 from 모듈이름 improt*  별을 표현하면 모든 함수 사용가능"""