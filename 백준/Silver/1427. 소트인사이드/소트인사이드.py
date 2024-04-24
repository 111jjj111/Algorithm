n = input()
my_list = [i for i in n]
my_list.sort(reverse=True)
n = "".join(my_list)
print(n)