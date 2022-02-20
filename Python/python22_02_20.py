#파이썬 기초 문법

#함수 문법

def num_plus(num1,num2): #간단한 예제 #함수 선언
    return num1+num2   #return으로 값을 받음

print(num_plus(10,20))


#학생들 민증 7자리 입력하면 생년월일 나이 성별을 알려주는 함수


def stdInfo(std_num):

    #생년월일
    
    if std_num[0]==9 and std_num[1]>=0:
        year=1900+std_num[0]*10+std_num[1]
        month=std_num[2:4]
        ill=std_num[4:6]
        print("%s년 %s월 %s일"%(year,month,ill))
    else:
        year=2000+int(std_num[0])*10+int(std_num[1])
        month=std_num[2:4]
        ill=std_num[4:6]
        print("%s년 %s월 %s일"%(year,month,ill))

    #나이

    now_year=2022
    age=now_year-year+1
    print("나이 %d"%age)

    #성별
    if (std_num[6]==2 or std_num[6]==4) :
        gen='woman'
        print('%s'%gen)
    else :
        gen='man'
        print('%s'%gen)
    
    return 0


stdInfo_test=input("학생의 민증 앞 7자리를 입력하세요 : ")
stdInfo(stdInfo_test)