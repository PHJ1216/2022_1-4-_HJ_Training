#파이썬 기초 문법

#함수 문법

# 클래스-객체 기초 문법

'''class Triangle :   # 클래스 생성
	pass             # 실행할 내용 없을 때 지나치는 키워드 pass

tri1 = Triangle()    #객체 tri1~4 4개 생성  객체이름=클래스이름() 형식으로 생성
tri2 = Triangle()
tri3 = Triangle()
tri4 = Triangle()'''

# 클래스 변수

class Triangle :   # 클래스 생성
	height = 10     # 클래스 변수 선언
	bottom = 4

tri1 = Triangle()   # 객체 생성
tri1.height=8
print(tri1.height)   # 클래스 변수 접근 시 객체이름.변수 형식으로 접근
print(tri1.bottom)

tri2 = Triangle()
print(tri2.height)  # 22 line에서 변수 값이 변했지만 클래스에 영향을 안 주므로 tri2객체에서는 height값은 10임
print(tri2.bottom)

# 인스턴스 변수와 메서드

class xy_plus :
    def plus(self, x, y) : # 메소드
        self.x = x
        self.y = y
        print(x+y)
    
    def real_mul(self):     # 메소드 
        return self.x*self.y
        

xy1 = xy_plus() # 객체 생성
xy1.plus(4, 5) # 객체 메소드 실행  # self.변수이름 형식의 변수가 인스턴스 변수
print(xy1.real_mul())  # real_mul 메소드 실행

# __init__ 생성자 메소드 
class Test_init : 
    cal_count = 0
    
    def __init__(self, b, h = 5) : #생성자
        self.b = b
        self.h = h

    def area(self) :
        Test_init.cal_count += 1
        
        return self.b * self.h / 2

test1 = Test_init(4)      #__init__메소드 적용 h는 자동으로 5
test2 = Test_init(6, 10)

print(test1.b, test1.h, test1.area(), test1.cal_count) # count 1
print(test2.b, test2.h, test2.area(), test2.cal_count) # count 2