

#ternary operator
def valid_age():
    age=int(input("enter your age: "))
    return True if age>=18 else False

print(valid_age())

#built in method(function)
name="madhav"
print(name.upper()) #MADHAV
print(name.lower()) #madhav
print(name.title()) #Madhav
print(name.islower()) #true 
print(name.isupper()) #false

"""

lower() to get a lowercase version of a string

islower() to check if a string is lowercase

upper() to get an uppercase version of a string

isupper() to check if a string is uppercase

title() to get a capitalized version of a string

startsswith() to check if the string starts with a specific substring


endswith() to check if the string ends with a specific substring

"""
#replace() to replace a part of a string
text = "I love apples"
new_text = text.replace("apples", "oranges")
print(new_text)  # Output: I love oranges



#split() to split a string on a specific character separator
data = "apple,banana,cherry"
fruits = data.split(",")
print(fruits)  # Output: ['apple', 'banana', 'cherry']

#What if you don’t give it a separator?
#it will split on any whitespace (spaces, tabs, newlines).
text = "one two  three\nfour"
parts = text.split()
print(parts)  # ['one', 'two', 'three', 'four']


#strip() to trim the whitespacefrom a string
raw_input = "   Hello World   "
clean_input = raw_input.strip()
print(clean_input)  # Output: Hello World


#join() to append new letters to a string
words = ["Hello", "world"]
sentence = " ".join(words)
print(sentence)  # Output: Hello world


#find() to find the position of a substring
message = "Find the needle in the haystack"
position = message.find("needle")
print(position)  # Output: 9 (index where "needle" starts)






