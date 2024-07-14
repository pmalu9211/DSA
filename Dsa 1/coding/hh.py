# even = []
# odd = []
# for i in range(1,101):
#     if i%2 ==0:
#         even.append(i)
#     else:
#         odd.append(i)

# sum = 0
# for k in even:
#     sum = k + sum
# print("Sum of all even numbers from 1 to 100 is : " + str(sum))

# sum = 0
# for k in odd:
#     sum = k + sum

# print("Sum of all odd numbers from 1 to 100 is : " + str(sum))


for i in range(1,101):
    if i%3== 0 and i%5 == 0:
        print("Buzzfeed")
    elif i%3 == 0:
        print("buzz")
    elif i %5 == 0:
        print("Feed")
    else:
        print(i)

