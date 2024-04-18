s = input()
count_one = 0
count_zero = 0
if s[0] == '1':
  count_one += 1
else:
  count_zero += 1
  
for i in range(1,len(s)):
    if s[i] != s[i - 1] and s[i] == '0':
      count_zero += 1
    elif s[i] != s[i - 1] and s[i] == '1':
      count_one += 1


if count_one > count_zero:
  print(count_zero)
else:
  print(count_one)