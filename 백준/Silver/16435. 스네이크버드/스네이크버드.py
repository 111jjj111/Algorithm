fruit_num, snake_length = map(int,input().split())

fruit_location = list(map(int,input().split()))

fruit_location.sort()

for i in fruit_location:
  if snake_length >= i:
    snake_length += 1
  else:
    break

print(snake_length)
