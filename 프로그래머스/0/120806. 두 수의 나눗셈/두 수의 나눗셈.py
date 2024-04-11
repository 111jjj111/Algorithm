def solution(num1, num2):
    answer = (lambda x,y:(x/y)*1000)(num1,num2)
    return int(answer)