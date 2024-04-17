data = input()
row = int(data[1])
column = ord(data[0]) - ord('a') + 1
result = 0
moving = [
  (-2,-1),(-1,-2),(2,-1),(-2,1),(-1,2),(1,-2),(1,2),
  (2,1)
]
for i in moving:
  next_row = row + i[1]
  next_column = column + i[0]
  if next_row >= 1 and next_column >= 1 and next_row <= 8 and next_column <= 8:
    result += 1
print(result)
