#파이썬 기초 문법

# 클래스 다중 상속

class First :
    name = "first1"
    def __init__(self) :
        print("First class1")
    
    def printFirst(self) :
        print("first1")
        
class Second :
    name = "second2"
    def __init__(self) :
        print("First class2")
    
    @classmethod
    def printName(cls) :
        print(cls.name)

#상속해야 할 부모클래스가 두 개인 경우 충돌 가능
#파이썬은 MRO에 따라 다중 상속을 진행
class Third(First, Second) :
    pass

third = Third()
third.printName()
third.printFirst()