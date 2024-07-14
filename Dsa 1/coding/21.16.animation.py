# from tkinter import *

# window = Tk()

# image = PhotoImage(file='download.png')

# canvas = Canvas(window,height=555,width=555,)

# canvas.pack()

# window.mainloop()

from tkinter import *
import time

WIDTH = 1400
HEIGHT = 788
xVelocity = 3
yVelocity = 5
window = Tk()

canvas = Canvas(window,width=WIDTH,height=HEIGHT,bg='black')
canvas.pack()

# background_photo = PhotoImage(file='space.png')
# background = canvas.create_image(0,0,image=background_photo,anchor=NW)

# space = PhotoImage(file='Race-Car-Transparent-PNG.png')
# oo = canvas.create_image(0,0,image=space,anchor=NW)

photo_image = PhotoImage(file='ufo.png')
my_image = canvas.create_image(0,0,image=photo_image,anchor=NW)

image_width = photo_image.width()
image_height = photo_image.height()

a = False






while  a == True:
    coordinates = canvas.coords(my_image)
    print('c',coordinates)
    print('c0',coordinates[0])
    print('c1',coordinates[1])
    if(coordinates[0]>=(WIDTH-image_width) or coordinates[0]<0):
        
        xVelocity = -xVelocity
    if(coordinates[1]>=(HEIGHT-image_height) or coordinates[1]<0):
        
        yVelocity = -yVelocity
    canvas.move(my_image,xVelocity,yVelocity)
    window.update()
    time.sleep(0.011)
    def play():
        a == True

    def stop():
        a== False
button = Button(window,text='start',command=play).pack(side='bottom')
button1 = Button(window,text='start',command=stop).pack(side='bottom')
window.mainloop()