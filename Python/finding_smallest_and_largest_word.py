# Contributed by : RajatRathore123-github
# Date : 6-10-2022

# Program to find smallest and largest word in given string

s = input("Enter the string : ")
str = s.split()
max = 0
for ele in str:
    if len(ele) > max:
        max = len(ele)
        max_word = ele

min = len(str[0])
min_word = ""
for ele in str:
    if len(ele) < min:
        min = len(ele)
        min_word = ele        
print("Word with maximum length in given string is : ",max_word," with length ",len(max_word)) 
print("Word with minimum length in given string is : ",min_word," with length ",len(min_word))


