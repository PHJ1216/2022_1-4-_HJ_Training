#파이썬 기초 문법

#함수 문법

# 파일입출력 기초 문법 

'''
f = open("python-test/py1.txt", 'r')  #파일을 열거나 읽거나 추가시 모드 r w a로 구분
f.close()
'''
# 파일 읽기 메서드
f = open("test.txt", 'w')
for i in range(1, 11) :
    sentence = "%dth line.\n" %i
    f.write(sentence)
f.close()

a = open("test.txt", 'r')
data = a.readlines()  #readline readlines 차이 전자는 한줄 반환 후자는 모든 줄을 리스트 반환
print(data)
a.close()

a = open("test.txt", 'r')
data = a.read() #전체 문자열을 그대로 읽어들임  
print(data)
a.close()