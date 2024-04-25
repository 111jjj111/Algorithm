r, c = map(int, input().split())
land_map = [list(input()) for _ in range(r)]
steps = [(1, 0), (0, 1), (0, -1), (-1, 0)]

# 3면이상 바다인 땅(X) 바다(.)로 바꾸기
for i in range(r):
  for j in range(c):
    if land_map[i][j] == 'X':
      sea_count = 0
      for step in steps:
        dx = i + step[0]
        dy = j + step[1]
        if 0 <= dx < r and 0 <= dy < c:
          if land_map[dx][dy] == '.':
            sea_count += 1
        else:
          sea_count += 1
          continue
      if sea_count >= 3:
        land_map[i][j] = 'Y'
cordinate = []
# X가 있는 좌하단 우상단 점을 찾아서 지도 새로만들기
for i in range(r):
  for j in range(c):
    if land_map[i][j] == 'Y':
      land_map[i][j] = '.'
    elif land_map[i][j] == 'X':
      cordinate.append((i,j))

x1 = 0
y1 = c-1
x2 = 0
y2 = 0
# 지도 범위 구하기
for i in range(0, r):
    if 'X' in land_map[i]:
        x1 = i
        break
for i in range(r-1, -1, -1):
    if 'X' in land_map[i]:
        x2 = i
        break

for i in range(x1, x2+1):
    for j in range(c):
        if land_map[i][j] == 'X':
            y1 = min(y1, j)
            y2 = max(y2, j)
          
for i in range(x1,x2 + 1):
  for j in range(y1,y2 + 1):
    print(land_map[i][j],end='')
  print()