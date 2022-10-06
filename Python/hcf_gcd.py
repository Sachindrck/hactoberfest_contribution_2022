def hcf(num1,num2):
    if num1>num2:
        smallest = num2
    else:
        smallest = num1
    for i in range(1,smallest+1):
        if((num1 % i == 0) and (num2 % i == 0)):
            hcf = i
    return hcf

print("HCF = ",hcf(12,14))          