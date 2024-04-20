n,m = map(int,input().split())

picture = [[0 for _ in range(100)] for _ in range(100)]

for i in range(n):
  x1,y1,x2,y2 = map(int,input().split())

  for j in range(x1 - 1,x2):
    for k in range(y1 - 1,y2):
      picture[j][k] += 1

  result = 0
  for j in range(100):
    for k in range(100):
      if picture[j][k] > m:
        result += 1

print(result)
