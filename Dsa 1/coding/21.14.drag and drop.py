from tkinter import *

window = Tk()

label = Label(window,bg='red',width=10,height=5)
label.place(x = 100,y = 100)

label1 = Label(window,bg='blue',width=10,height=5)
label1.place(x = 1,y = 100)


# def pp(event):
#     print("you cliccked")

# def ppp(event):
#     print('YOOOOOo')


# label.bind("<Button-3>",ppp)
def f(event):
    widget = event.widget#gets the widget we are currently draging
    widget.aa = event.x
    widget.bb = event.y
    # print(label.winfo_x())
    # print(label.winfo_y())
def g(event):
    widget = event.widget
    x = event.x + widget.winfo_x() - widget.aa
    y = event.y + widget.winfo_y() - widget.bb

    widget.place(x=x,y=y)

label.bind("<Button-1>",f)
label.bind("<B1-Motion>",g)

label1.bind("<Button-1>",f)
label1.bind("<B1-Motion>",g)


window.mainloop()