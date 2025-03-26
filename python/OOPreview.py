"""
class - collection of objects ... blueprint for creating objects ...defines a set of attributes and methods that the created objects (instances) can have

objects - an instance of a class ... represents a specific implementation of the class and holds its own data ... consists of the following:
    state - represented by the attributes and reflects the properties of an object
    behavior - represented by the methods of an object and reflexts the response of an object to other objects
    identity - gives a unique name to an object and enables one object to interact with other objects 
                    
polymorphism
encapsulation
inheritance
data abstraction
"""

class Dog:
    species = "Canine" #Class attribute

    def __init__(self, name, age):
        self.name = name #Instance attribute
        self.age = age #Instance attribute

    #creating an object of the Dog class
    dog1 = Dog("Buddy", 3)

    print(dog1.name)
    print(dog1.species)