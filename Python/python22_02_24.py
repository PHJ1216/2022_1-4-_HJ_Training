#파이썬 기초 문법

# 클래스 상속 

# 부모 클래스
class Person :
    job = "" # 클래스 변수
    
    @classmethod # 클래스 메소드
    def greeting(cls) :
        print("안녕하세요 저는",cls.job,"입니다.")
    
    def printAge(self) :
        print(self.age)

class Student(Person) : # Person 상속
    job = "student"
    
    def __init__(self, age) : # 생성자
        self.age = age
        
    def printAge(self) :
        print("저의 나이는", self.age, "입니다.")    

class Professor(Person) : # Person 상속
    job = "professor"   
    
    def __init__(self, age) :
        self.age = age
        
    def printAge(self) :
        print("저의 나이는", self.age, "입니다.") 
   
std = Student(14)
pf = Professor(56)


std.greeting()
std.printAge()

pf.greeting()
pf.printAge()