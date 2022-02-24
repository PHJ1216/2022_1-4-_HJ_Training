#파이썬 기초 문법

# 예외처리 

# try~except
try:
  10 / 0
except ZeroDivisionError as e:
  print(e)

# try~else
try:
  10 / 2
except ZeroDivisionError as e:
  print(e)
else:
  print("Success!")

# try~finally
try:
  10 / 2
except ZeroDivisionError as e:
  print(e)
else:
  print("Success!")
finally:
	print("ZeroDivisionError Check") # try문이 종결되면 무조건 finally 내의 코드를 실행함

"""------------------------"""
# 오류 회피 방법
try:
  10 / 0
except ZeroDivisionError:
  pass

"""------------------------"""
# 오류 발생 방법
try:
  raise NameError   # 고의로 오류 발생시킴
except NameError:
  print("NameError occurred")