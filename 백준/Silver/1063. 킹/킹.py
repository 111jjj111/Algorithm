# input : 이동할 위치,킹과 스톤위치
trans_route = {
    'R': (0, 1),
    'L': (0, -1),
    'B': (-1, 0),
    'T': (1, 0),
    'RT': (1, 1),
    'LT': (1, -1),
    'RB': (-1, 1),
    'LB': (-1, -1)
}

chess_board = [[0 for _ in range(8)] for _ in range(8)]

king, stone, num = map(str, input().split())
num = int(num)

king_x = ord(king[0]) - ord('A')
king_y = int(king[1]) - 1
stone_x = ord(stone[0]) - ord('A')
stone_y = int(stone[1]) - 1

for i in range(num):
  user_input = input()
  k_x = king_x + trans_route[user_input][1]
  k_y = king_y + trans_route[user_input][0]
  if k_x < 0 or k_x > 7 or k_y < 0 or k_y > 7:
    continue
  else:
    if stone_x == k_x and stone_y == k_y:
      s_x = stone_x + trans_route[user_input][1]
      s_y = stone_y + trans_route[user_input][0]
      if s_x < 0 or s_x > 7 or s_y < 0 or s_y > 7:
        continue
      else:
        king_x = k_x
        king_y = k_y
        stone_x = s_x
        stone_y = s_y
        continue
    king_x = k_x
    king_y = k_y


king_result = chr(king_x + 65) + str(king_y + 1)
stone_result = chr(stone_x + 65) + str(stone_y + 1)
print(king_result)
print(stone_result)
