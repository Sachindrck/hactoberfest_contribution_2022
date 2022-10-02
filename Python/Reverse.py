number = int(input("Enter the integer number: "))  
  
revs_number = 0  
  
while (number > 0):  
    remainder = number % 10  
    revs_number = (revs_number * 10) + remainder  
    number = number // 10  
    
print("The reverse number is : {}".format(revs_number))  