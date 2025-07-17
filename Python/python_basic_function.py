

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

isalpha() to check if a string contains only characters and is not empty

isalnum() to check if a string contains characters or digits and is not empty, false when string contains space.

isdecimal() to check if a string contains only digits and is not empty

len() to get integer length of string,list,tuple,dictionary

type() to get the type of object

abs() to get positive integer of any no. eg. abs(-5)=5



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


#The any() function in Python returns True if at least one element in an iterable is truthy, and False if all elements are falsy or the iterable is empty.
print(any([False, False, True]))  # True
print(any([0, False, "", None]))  # False


#The all() function in Python returns True if all elements in an iterable are truthy, and False if any element is falsy or the iterable is empty.
print(all([True, 1, "text"]))  # True
print(all([]))  # True (by definition – vacuously true)
print(all([True, 0, "hello"]))  # False (0 is falsy)


#complex numbers
num1 = 2+3j
num2 = complex(2,3)
print(num2.real, num2.imag)


#round function
num3= 5.23
num4=5.65
print(round(num3))
print(round(num4,1)) #rounds to 1 decimal point


"""
remove(x) Removes the first occurrence of the element x from the list.

append(x) Adds x to the end of the list.

pop([i]) Removes and returns the element at index i. If no index is given, removes the last item.

insert(i, x) Inserts x at index i, shifting elements to the right.

"""

# extend(iterable) Adds all elements from another iterable (e.g. list) to the end.
lst = [1, 2]
lst.extend([3, 4])
print(lst)  # [1, 2, 3, 4]



#sort() to sort a list (it should have same data type)
numbers = [3, 1, 4, 2]
numbers.sort()
print(numbers)  # [1, 2, 3, 4]

numbers.sort(reverse=True)
print(numbers)  # [4, 3, 2, 1]

words = ["banana", "apple", "cherry"]
words.sort(key=len)  # Sort by length
print(words)  # ['apple', 'banana', 'cherry']

fruit=["Apple","cherry","mango","Banana"]
fruit.sort(key=str.lower) #sort without 
print(fruit) #["Apple","Banana","cherry","mango"]

#using sorted() keyword Original stays intact
a = [3, 1, 2]
print(a)  # [3, 1, 2]
print(sorted(a))  # [1, 2, 3]



#The index() method in Python returns the index of the first occurrence of a specified value in a list.
fruits = ['apple', 'banana', 'cherry', 'banana']
i = fruits.index('banana')
print(i)  # 1



#split() Splits a String into a List
text = "apple banana cherry"
parts = text.split()  # default: split by space
print(parts)  # ['apple', 'banana', 'cherry']

texts = "name,email,age"
parts = texts.split(",")
print(parts)  # ['name', 'email', 'age']

#join() Joins a List into a String
words = ['apple', 'banana', 'cherry']
text = " ".join(words)
print(text)  # "apple banana cherry"

csv = ",".join(['name', 'email', 'age'])
print(csv)  # "name,email,age"


# .bit_length() method returns the number of bits required to represent an integer in binary, only works on the absolute value (i.e., ignores the sign)
n = 9
print(n.bit_length())  # 4
(-9).bit_length()  # 4