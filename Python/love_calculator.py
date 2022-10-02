# 🚨 Don't change the code below 👇
print("Welcome to the Love Calculator!")
name1 = input("What is your name? \n")
name2 = input("What is their name? \n")
# 🚨 Don't change the code above 👆

# Write your code below this line 👇
name1 = name1.lower()
name2 = name2.lower()
combinedstr = name1 + name2

t = combinedstr.count("t")
r = combinedstr.count("r")
u = combinedstr.count("u")
e = combinedstr.count("e")

true = t + r + u + e

l = combinedstr.count("l")
o = combinedstr.count("o")
v = combinedstr.count("v")

love = l + o + v + e

love_percentage = str(true) + str(love)
love_score = int(love_percentage)

if love_score < 10 or love_score > 90:
    print(f"Your score is **{love_score}**, you go together like coke and mentos.")
elif love_score > 40 and love_score < 50:
    print(f"Your score is **{love_score}**, you are alright together.")
else:
    print(f"Your score is **{love_score}**.")
