while True:
  my_list = []
  a,b,c = map(int,input().split())
  if a + b + c == 0:
    break
  my_list.append(a)
  my_list.append(b)
  my_list.append(c)
  my_list.sort()
  if (my_list[0] * my_list[0]) + (my_list[1] * my_list[1]) == my_list[2] * my_list[2]:
    print("right")
  else:
    print("wrong")