n = int(input())
my_list = list(map(int,input().split()))
prime_count = 0
for i in my_list:
    if i == 1:
        continue
    else:
        tmp_count = 0
        for j in range(1,i + 1): 
            if i % j == 0:
                tmp_count += 1
        if tmp_count == 2:
            prime_count += 1


print(prime_count)
        