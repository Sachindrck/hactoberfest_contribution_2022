# Python Program to Check Armstrong Number
Number = int(input("Please Enter the Number to Check: "))

Sum = 0
Times = 0

Temp = Number
while Temp > 0:
    Times = Times + 1
    Temp = Temp // 10

Temp = Number
while Temp > 0:
    Reminder = Temp % 10
    Sum = Sum + (Reminder ** Times)
    Temp //= 10

if Number == Sum:
           print("%d is Armstrong Number." %Number)
else:
           print("%d is Not a Armstrong Number." %Number)