import math
def solution(numer1, denom1, numer2, denom2):
    answer = []
    lcm = denom1 * denom2 / math.gcd(denom1,denom2)
    res1 = lcm // denom1
    res2 = lcm // denom2
    numer1 *= res1
    numer2 *= res2
    result_numer = int(numer1 + numer2)
    result_denom = int(lcm)
    divi = math.gcd(result_numer,result_denom)
    result_numer = result_numer // divi
    result_denom = result_denom // divi
    answer.append(result_numer)
    answer.append(result_denom)
    
    return answer