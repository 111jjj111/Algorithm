board = [[0 for i in range(6)] for j in range(6)]
count = 0
moving = [(-2, -1), (-1, -2), (2, -1), (-2, 1), (-1, 2), (1, -2), (1, 2), (2, 1)]
first_point = input()
first_x = ord(first_point[0]) - 65
first_y = int(first_point[1]) - 1
board[first_y][first_x] += 1
var_front = (first_y,first_x)

# 이동할 때 마다 경로확인부분 추가
for i in range(34):
  user_input = input()
  x = ord(user_input[0]) - 65
  y = int(user_input[1]) - 1
  for i in moving:
    if var_front[0] + i[0] == y and var_front[1] + i[1] == x:
      var_front = (y,x)
      board[y][x] += 1

  

final_point = input()
final_x = ord(final_point[0]) - 65
final_y = int(final_point[1]) - 1
board[final_y][final_x] += 1

for i in range(6):
  for j in range(6):
    if board[i][j] == 1:
      count += 1

flag = False

for i in moving:
  if final_y + i[0] == first_y and final_x + i[1] == first_x and count == 36:
    flag = True
    break

if flag == True:
  print("Valid")
else:
  print("Invalid")
