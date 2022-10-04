vowel='aeiou'
my_str=input('enter a string= ')
new_str=my_str.casefold()
count={}.fromkeys(vowel,0)
for char in new_str:
    if char in count:
        count[char]+=1
print(count)        