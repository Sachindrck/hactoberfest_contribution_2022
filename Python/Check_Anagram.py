'''Two strings are said to be anagrams if we can form one string by arranging the characters of another string. 
For example, Race and Care. Here, we can form Race by arranging the characters of Care.'''

# Function is to check whether two strings are anagram of each other or not.
def isAnagram(a, b):

	if sorted(a) == sorted(b):
		return True
	else:
		return False

# User Input
string_1 = input("Enter First String : ")
string_2 = input("Enter Second String : ")
if(isAnagram(string_1, string_2)):
    print("The " +string_1+ " and "+ string_2+" strings are anagram of each other.")
else:
    print("The " +string_1+ " and "+ string_2+" strings are NOT anagram of each other.")
