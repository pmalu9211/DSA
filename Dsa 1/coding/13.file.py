# import os
# f = "D:\\STUDY\\New folder"
# if os.path.exists(f):
#     print("that location exists")
#     if os.path.isfile(f):
#         print("It is a file")
#     if os.path.isdir(f):
#         print("It is a directory")
# else:
#     print("that location dosent exists")

# with open ('test.txt') as file:
#     print(file.read())
#     #By using this type of file opening method the file is closed after the indentation
# print(file.closed)

# text = "Hello yoooo we are cool"
# with open('test.txt','w') as file:
#     file.write(text)
# #using the write mode clears the text written before and then writes a new text in the file

# text = "Broo code is cool"
# with open('test.txt','a') as file:
#     file.write(text)
# #using append mode and writting into a file dosent overwrites it, it appends the file

# #copy file

# import shutil
# shutil.copyfile('test1.txt','hello.txt')


# #moving a file
# import os
# os.replace('test.txt','test1.txt')#The source file gets moved to the destination file

# #removing a file(dangerpous)
# import os
# print(os.path.exists("hello.txt"))
# os.remove("D:\\STUDY\\m1_3.pdf")
# print("file removed")

# import os
# os.remove('test1.txt')#to remove a file
# os.removedirs('new folder')#to remove a directory or a folder

# import shutil
# shutil.rmtree('folder')# removes a directory that contains files
