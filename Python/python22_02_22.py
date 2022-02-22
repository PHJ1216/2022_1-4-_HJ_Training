#파이썬 기초 문법

#함수 문법

# 클래스 - 생성자와 정적 메소드

class test_init :
    cal_count=0

    def __init__(self, b, h) : #생성자 __init__ 수정 x 그대로 사용해야함.
        self.b = b
        self.h = h
    
    def area(self) :
        return self.b * self.h / 2
    
    @staticmethod               # 정적메소드 @staticmethod로 선언 앞에 넣어줘야함 일반 함수처럼 사용o 
    def isIsosceles(a, b) :
        test_init.cal_count += 1
        return a == b    

   
tri1 = test_init(4, 5) #호출하면서 바로 인자 전달
tri2 = test_init(6, 10)

print(tri1.b, tri1.h, tri1.area())
print(tri2.b, tri2.h, tri2.area())
print(tri1.isIsosceles(5,5), tri1.cal_count) # 이등변 삼각형 구별 a==b면 true 
print(test_init.isIsosceles(5,4))           # 아니라면 false
