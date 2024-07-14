# #if statements


# f = int(input("What is your age : "))
# if f >= 18:#this program will exicute before the 100 one case it is before it
#     print("You can watch this thing leagally")
# elif f ==100:
#     print("How you still alive?")
# elif f < 18:
#     print("Boy you need to grow up.")



# #logical operators and or not


# i = int(input("What is the number? : "))
# if i >= 100 and i <= 1000:
#     print("the number lies between 100 and 1000")
# elif i == 69 or i ==420:
#     print("dont try to be funny")
# elif not(i >= 100 and i <= 1000):
#     print("Your number is not between 100 and 1000")



# #while loop


name = None

while not name:
    name = input("Name : ")

print("hello"+name)

# #another way to do the above thing
# name = ""
# while len(name) == 0:
#     name = input("name : ")
# print("Hello "+ name)


# #for loop


# for i in range(10):
#     print(i)
# for i in range(100,200+1,2):
#     print(i)
# for i in "Hello world":#itteration
#     print(i)

# import time
# for i in range(10,0,-1):
#     print(i)
#     time.sleep(1)
# print("THE FUCK YOU WAS WAITING FOR THE TIMER TO GO DOWN?? NIGGAs")



#Nested loops
print("hello"+"\t"+"world")

a = int(input("rows : "))
b = int(input("Columns : "))
for i in range(a):
    for j in range(b):
        print("*",end = "")
    print("")
#the end after print allows to insert a string after a string or variable in the print has ended
#The end is defaultly set to /n
print("Hello",end = "")
print("helrj")