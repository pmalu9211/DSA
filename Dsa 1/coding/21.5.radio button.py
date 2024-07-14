from tkinter import *

food = ["pizza","hamburger","hotdog"]

window = Tk()

#value assignes a different value to each of the radio button
#variable groups radiobuttons together if they share same variable

x = IntVar()

for i in range (len(food)):
    radiobutton = Radiobutton(window, 
                              text = food[i],
                              variable=x, 
                              value=i,
                              padx=20,
                              pady=1,
                              font=('Italic',20),
                              indicatoron=0,#uses buttons on the text insted of the circle 

                              )
    radiobutton.pack(anchor=W)#make everything left aligned

window.mainloop()