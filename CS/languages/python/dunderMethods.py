'''
dunder (double underscore) or magic methods 


why is it in python that i can add two strings?
'''

str1 = "hello123"
str2 = "goodbye456"

#since these strings are objects in python there is some method(s) here that defines what should happen
print(str1 + str2)
#the .__add__() function
print(str1.__add__(str2))
