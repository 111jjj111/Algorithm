n = int(input())
waiting = list(map(int,input().split()))
result = []
waiting.sort()
for i in range(len(waiting)):
  tmp = sum(waiting[:i+1])
  result.append(tmp)
  

print(sum(result))