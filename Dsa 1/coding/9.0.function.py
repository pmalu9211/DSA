# # in making and calling a function you sould match the number of arguments with the number of parameters or it will give a error

# # this is a function with variable number of arguments

# def hello(*name):
#     for i in range(len(name)):
#         print("hello",name[i])
#     # print("hello ",name[1])

# hello("prathamesh","Game","world","gay")

# #default arguments
# #                   If the user forgets to give an argument then we can put some default arguments to the function
# def hi(college = "Pict", age = "18", year = "first year"):
#     print("hello, we need some details")
#     print("info got : ",college,age,year)
# college = input("Which college you are from ? : ")
# age = input("How old are you my nigga ? : ")
# year = input("which year are you in ? : ")
# hi(college,age)

# def multi (x,y):
#     return x*y
# print(multi(4,4))

# #nested function calls
# num = input("type the number")
# num = float(num)
# num = abs(num)
# num = round(num)
# print(num)

# print(round(abs(float(input("type the number")))))
# # the order of using a variable in python, 
#                                             #l = local
#                                             #E = Enclosing  = non local function, just non local variable are used to change the enclosing variable 
#                                             #G = Global
#                                             #B = Built - in
# x = 4
# print("outside the functions : ",x)
# def a():
#     # print("before changing the value of x in the a : ",x)
#     x = 10
#     print("inside the functio a : ", x)
#     def b():
#         nonlocal x 
#         print("Nonlocal x ",x)
#         x = 33
#         print("Nonlocal x after its value is changed : ",x)
        
#     b()
# a()
# # b()


def hello(*name):
    global fun
    fun = list(name)

    # for i in range(len(name)):
        # print("hello",name[i])
    fun[0] = "sarvesh"
    print(name)
    print(fun)
    # list = list(name)
    # list[0] = "Sarvesh"
hello("Pratham", "omkar", "aditya")

# #using funciont to calculate the summation of the given numbers

# def sum(*num):
#     sum1 = 0
#     for i in num:
#         sum1 = sum1 + i
#     return sum1
# print(sum(1,2,3))


#**kwargs = packs all arguments in a dictionary
            #can be used to get multiple arguments in the from of key and value
def greet(**kwargs):
    print("hello",end = " ")
    print(kwargs.items())
    for i in kwargs.values():
        print(i, end=" ")

greet(title="mrs",first="pratham",middle = "manohar", last = "malu")