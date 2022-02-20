#파이썬 기초 문법

#조건문과 제어문
odd=0
even=0
odd_list=[]
even_list=[]
for num_count in range(10) :
    if num_count % 2 == 0 :
        if num_count==0:            #예외처리 0은 짝수가 아님
            continue
        even_list.append(num_count) 
        even+=1                        #짝수면 even에+1    
        
    else :
        odd_list.append(num_count)
        odd+=1                         #홀수면 odd에+1
    
print("짝수 갯수 : %d"%even)
print("홀수 갯수 : %d"%odd)
3
print("짝수 : %s , 홀수 : %s"%(even_list,odd_list))

#연산자 and or not 활용
input_int=int(input("2또는 3 입력 : "))
if input_int==3 or input_int==2:
    print("2나 3입니다.")
else:
    print("입력 실패")

#요소 in 튜플/리스트/딕셔너리

l = [10, 20, 30, 'a', 'b', 'c', "hello"]
dic={"apple":"red","banana":"yellow"}

if 'apple' in dic :
    print("요소가 존재합니다.")
else :
    print("요소가 존재하지 않습니다.")
