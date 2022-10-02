# Python program for calculator

print("Please select operation -\n" \
		"1. Add\n" \
		"2. Subtract\n" \
		"3. Multiply\n" \
		"4. Divide\n")


# Take input from the user
user_input = int(input("Select operations form 1, 2, 3, 4 :"))
num1 = int(input("Enter First number: "))
num2 = int(input("Enter Second number: "))

if user_input == 1:
	opertion = num1 + num2 # Addition
elif user_input == 2:
	opertion = num1 - num2 # Subtraction
elif user_input == 3:
	opertion = num1 / num2 # Division
elif user_input == 4:
	opertion = num1 * num2 # Multiplication
else:
	print("Invalid Input")
print("Your answer is {0}".format(opertion))
