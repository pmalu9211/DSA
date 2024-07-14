# from car import Car

# car_one = Car("Sedan","Mahindra",2004,"Black")
# print(car_one.d)
# print(car_one.c)
# print(car_one.b)
# print(car_one.a)

# car_two = Car("Electric","Lambo",1999,"Red")

# car_one.drive()
# car_one.stop()

# print(Car.wheels)
# Car.wheels = 3
# print(car_two.wheels)
# car_one.wheels = 44
# print(car_one.wheels)

#Inheritance
class Animal:
    alive = True
    # def __init__(self,name,age,cast):
    #     self.name = name
    #     self.age = age
        # self.cast - cast
        
        
    def eat(self):
        print("The animal is eating")
        return self
    def sleep(self):
        print("The animal is sleeping")
        return self
    
# class Rabbit(Animal):
#     def __init__(self,name,old):
#         self.name = name
#         self.old = old
        
# class Dog(Rabbit):
#     pass

# rabbit = Rabbit("Sassa",22)
# print(rabbit.alive)
# print(rabbit.eat)
# rabbit.sleep()

# dog = Dog("Bruno",33)
# print(dog.alive)

# class Goat(Animal,Car):
#     def fun(self):
#         print("Hello, I'm alive !")

# goat = Goat()
# goat.fun()

cow = Animal()
cow.eat().sleep()