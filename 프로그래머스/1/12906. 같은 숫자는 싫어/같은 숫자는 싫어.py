from collections import deque

def solution(arr):
    answer = deque(arr)
    tmp = 10
    for i in range(len(answer)):
        if answer[0] == tmp:
            answer.popleft()
            continue
        tmp = answer.popleft()
        answer.append(tmp)
        
            

        
    return list(answer)