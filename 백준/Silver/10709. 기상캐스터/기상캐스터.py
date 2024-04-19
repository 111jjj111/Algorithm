height,width = map(int,input().split())
sky = []
result = [[-1 for i in range(width)] for j in range(height)]

for i in range(height):
  user_input = input()
  sky.append(user_input)

for i in range(height):
  for j in range(width):
    count = 1
    if sky[i][j] == 'c':
      result[i][j] = 0
    if result[i][j] == 0:
      for k in range(j + 1,width):
        if sky[i][k] == 'c':
          break
        else:
          result[i][k] = count
          count += 1

for i in range(height):
  for j in range(width):
    print(result[i][j],end=" ")

  print()