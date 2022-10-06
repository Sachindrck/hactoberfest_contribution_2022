from collections import Counter

def count_vowels(phrase):
    """ accepts a string and counts the number of each vowels.
    returns a dictionary key --> values 
            of each vowel and their number of occurrences.
    """
    vowels = "aeiou"
    return Counter(c for c in phrase.lower() if c in vowels)
