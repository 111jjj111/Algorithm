user_input = 1000 - int(input())
count = 0
#500엔, 100엔, 50엔, 10엔, 5엔, 1엔
money_list = [500, 100, 50, 10, 5, 1]

for i in money_list:
  count += user_input // i
  user_input = user_input % i

print(count)