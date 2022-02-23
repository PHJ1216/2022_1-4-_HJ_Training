#파이썬 기초 문법

#함수 문법

# 클래스 상속

import math

# 삼각형
class Triangle : 
    cal_count = 0
    figure = "triangle"
    
    def __init__(self, b, h = 5) :
        self.b = b
        self.h = h
        
    def area(self) :
        Triangle.cal_count += 1
        
        return self.b * self.h / 2
    
    @staticmethod
    def isIsosceles(a, b) :
        Triangle.cal_count += 1
        
        return a == b
    
    @classmethod
    def printFigure(cls) :
        
        return cls.figure

# 정삼각형
class EquTriangle :
    cal_count = 0
    figure = "equilateral triangle"
    
    def __init__(self, a) :
        self.a = a
        
    def area(self) :
        EquTriangle.cal_count += 1
        
        return 0.25 * math.sqrt(3) * self.a ** 2
    
    def circumference(self) :
        
        return self.a * 3
    
    @classmethod
    def printFigure(cls) :
        
        return cls.figure

# 원
class Circle :
    cal_count = 0
    figure = "circle"
    
    def __init__(self, r) :
        self.r = r
        
    def area(self) :
        Circle.cal_count += 1
        
        return math.pi * self.r ** 2
    
    def circumference(self) :
        
        return 2 * math.pi * self.r
    
    @classmethod
    def printFigure(cls) :
        
        return cls.figure

tri = Triangle(10, 4)
eqtri = EquTriangle(2)
cir = Circle(8)

print(cir.printFigure(), cir.area(), cir.circumference())
print(tri.printFigure(), tri.area(), cir.circumference())
print(eqtri.printFigure(), eqtri.area(), cir.circumference())