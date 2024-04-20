m = int(input())
arr  = [1,0,0]
for i in range(m):
  x,y = map(int,input().split())
  tmp = arr[x - 1]
  arr[x - 1] = arr[y - 1]
  arr[y - 1] = tmp

print(arr.index(1) + 1) 