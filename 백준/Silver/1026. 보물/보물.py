n = int(input())
result = 0
arr_a = list(map(int,input().split()))
arr_b = list(map(int,input().split()))
arr_a.sort()
arr_b.sort(reverse = True)
for i in range(n):
  result += arr_a[i] * arr_b[i]

print(result)