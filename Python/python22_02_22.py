#파이썬 기초 문법

#함수 문법

# 파일입출력 기초 문법 

f = open("test.txt", 'w')
for i in range(1, 11) :
    sentence = "%d번째 줄입니다.\n" %i
    f.write(sentence)
f.close()

# 만약 readline으로 몇 줄이 있는지 알고 싶을 때
a = open("test.txt", 'r')
while 1 :
    line = a.readline()
    if not line : break #line이 None이 되면(=false) 반복문 탈출
    print(line)
a.close()

# 살짝 번외로 한정없이 입력해야할 때 아래와 같은 코드 사용

list = []

while 1 :
    data = input("빈칸을 입력하면 입력을 종료합니다.")
    if not data : break #공백일 때 break
    list.append(data)

print(list)