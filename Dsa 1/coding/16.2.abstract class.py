#Abstract class is used to protect a class form being used as an object(ABC) and @abstractmethod
from abc import ABC,abstractmethod

class Food(ABC):
    @abstractmethod

    
    def tast(self):
        print("the taste is fabulas")

class F(Food):
    def tast(self):
        return super().tast()
#you can't create a hirarchy of class using the abstract parent class
#You will have to def a function in the child class of the same name as that of the parent
f = F()
