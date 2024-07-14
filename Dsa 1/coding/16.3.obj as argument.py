class Car:
    color = None

def change(vehical,a):
    vehical.color = a

car = Car()
print(car.color)

change(car,"Blue")
print(car.color)

change(Car,"Grey")
print(Car.color)
