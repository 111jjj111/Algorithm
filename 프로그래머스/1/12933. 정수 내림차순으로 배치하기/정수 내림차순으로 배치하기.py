def solution(n):
    list_n = list(map(int,str(n)))
    list_n = sorted(list_n,reverse=True)
    return int(''.join(map(str,list_n)))