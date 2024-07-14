#concept where the class of an object is less important than the methods and class typeis not checled if minimum methods/attributes are present

class Boy:
    def eat(self):
        print("This human is eating unfortunately")
    def gym(self):
        print("this human is going to gym")
    
class Girl:
    def eat(self):
        print("this human is wasthing dishes")
    def gym(self):
        print("this human is wasthing dishes")

class Parent:
    def fun(self,cls):
        cls.eat()
        cls.gym()
        print("Don't have sex with your sister")

boy = Boy()
girl = Girl()

parent = Parent()
parent.fun(boy)
parent.fun(girl)