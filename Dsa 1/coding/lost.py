# """
#   #
#  ##
# ###"""

# n = int(input("Ok : "))

# for i in range(0,n+1):
#     for j in range(0,n-i):

#         print(" ",end="")
#     for k in range(0,i):
#         print("#",end="")
#     print("")

#     #
#    ###
#   #####
#  #######
# #########

# #in each row symbol = 2row - 1

# f = int(input("Number of rows of pyramid : "))




# for k in range (0,f+1):
    
#     for z in range(0,f-k):
#         print(" ",end="")
#     for m in range(0,2*k-1):
#         print("#",end="")
#     print("")
    
# #
# ##
# ###

# k = int(input("Give : "))

# for a in range(1,k+1):
#     for l in range(0,a):
#         print("#",end="")
#     print("")

###
 ##
  #

# i = int(input("Give : "))

# for k in range (0,i):
#     for n in range(0,k):
#         print(" ",end="")
#     for m in range(0,i-k):
#         print("#",end="")

#     print("")


    #
   ###
  #####
 #######
#########
 #######
  #####
   ###
    #

# k = int(input("Number of increasing rows : "))

# for l in range(1,k+1):
#     for m in range (0,k-l):
#         print(" ",end="")
#     for z in range(0,2*l-1):
#         print("#",end="")
#     print("")

# for mm in range (1,k):
#     for ll in range(0,mm):
#         print(" ",end="")
#     for kk in range(0,2*(k-mm)-1):
#         print("#",end="")
#     print("")


from tkinter import *

def a(event):
    print(event.x)
    print(event.y)

window = Tk()

label = Label(window,bg='red',width=10,height=5)

label.place(x = 100,y=100)

label.bind('<B1-Motion>',a)

window.mainloop()

from tkinter import *
import time
height=600
width=600
xv = 2
yv = 3
window = Tk()

canvas = Canvas(window,height= height,width = width)
canvas.pack()
photo = PhotoImage(file='ufo.png')



o = canvas.create_image(0,0,image =photo,anchor =NW)
while True:
    canvas.move(o,xv,yv)
    window.update()
    time.sleep(0.011)
    coorinates = canvas.coords(o)
    if coorinates[0] >= width -photo.width() or coorinates[0] <= 0:
        xv = -xv
    if coorinates[1] >= height - photo.height() or coorinates[1] <= 0:
        yv = -yv
    print(coorinates)
    
    
