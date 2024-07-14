from tkinter import *

window = Tk()

window.geometry("500x500")

image = PhotoImage(file='Race-Car-Transparent-PNG.png')

label = Label(window,image=image)
label.place(x=200,y=200)

def up(event):
    label.place(x=label.winfo_x(),y=label.winfo_y()-10)
    print(label.winfo_y())

def down(event):
    label.place(x=label.winfo_x(),y=label.winfo_y()+10)
    print(label.winfo_y())


def right(event):
    label.place(x=label.winfo_x() +10,y=label.winfo_y())


def left(event):
    label.place(x=label.winfo_x() -10 ,y=label.winfo_y())



window.bind("<w>",up)
window.bind("<a>",left)
window.bind("<s>",down)
window.bind("<d>",right)

window.mainloop()