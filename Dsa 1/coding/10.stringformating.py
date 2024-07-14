
# #different ways to do string formating
# print("Hello {a} you are {b} years old".format(a ="pratham",b = 12))
# print("Hello {1} you are {0} years old".format("pratham",12))
# print("Hello {} you are {} years old".format("pratham",12))

#somethings that you can do in the string formatting
name = "pratham"

print("Hello {}. Good Morning!".format(name))
print("Hello {:10}. Good Morning!".format(name))
print("Hello {:<10}. Good Morning!".format(name))
print("Hello {:>10}. Good Morning!".format(name))
print("Hello {:^10}. Good Morning!".format(name))

# number = 3432

# print("the number pi is {:.2f}".format(number))#shows 2 digits after the decimal
# print("the number pi is {:,}".format(number))#places a comma  neatly at all the thousands places
# print("the number pi is {:b}".format(number))#gives the number in binary
# print("the number pi is {:o}".format(number))#in octal
# print("the number pi is {:x}".format(number))#in hexa decimal
# print("the number pi is {:X}".format(number))#in hexadecimal with upper digits
# print("the number pi is {:e}".format(number))#in scientific calculation method