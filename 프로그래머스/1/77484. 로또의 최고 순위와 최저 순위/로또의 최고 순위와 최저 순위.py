def solution(lottos, win_nums):
    count = 0
    zero_count = 0
    lottos_str = list(map(str,lottos))
    win_str = list(map(str,win_nums))
    for i in lottos_str:
        if i in win_str:
            count += 1
        elif i == '0':
            zero_count += 1
    result = {6:1,5:2,4:3,3:4,2:5,1:6,0:6}
    return [result[count + zero_count],result[count]]