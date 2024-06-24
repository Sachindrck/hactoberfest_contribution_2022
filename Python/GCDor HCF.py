def compute_gcd(P, Q):


    if P > Q:
        smaller = Q
    else:
        smaller = P
    for i in range(1, smaller+1):
        if((P % i == 0) and (Q % i == 0)):
            gcd = i
    return gcd

number1 = 12
number2 = 14

print("The H.C.F. is", compute_gcd(number1, number2))