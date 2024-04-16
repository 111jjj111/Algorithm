n, k = map(int, input().split())
count = 0
money = []
for i in range(n):
  user_input = int(input())
  money.append(user_input)

money.sort(reverse=True)
for i in range(n):
  if money[i] <= k:
    count += (k // money[i])
    k = k % money[i]

print(count)
