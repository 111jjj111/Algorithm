n = int(input())
my_list = []

for i in range(n):
  my_list.append(tuple(map(int,input().split())))

my_list.sort(key=lambda x: (x[1],x[0]))

for i in range(n):
  print(f"{my_list[i][0]} {my_list[i][1]}")
