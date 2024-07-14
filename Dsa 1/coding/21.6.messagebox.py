from tkinter import *
from tkinter import messagebox

def click():
    # while(True):

        # messagebox.showinfo(title='Error',message='You are dumb')
    # if messagebox.askretrycancel(title='ask ok cancle',message='do you wnat to retry a thing ?',icon = 'warning'):
    #     print("You retried a thing")
    # else:
    #     print("You cancalled a thing")

    # answer = messagebox.askyesnocancel(title='The question is',message='Do you like me?',icon = 'warning')
    # if answer == True:
    #     print("Thats the sweetist thing I have heard today")
    # elif answer == False:
    #     print(":(")
    #     while answer != True:
    #         answer = messagebox.askyesnocancel(title='The question is',message='Do you like me?',icon = 'warning')
    # else:
        
    #     print("You cant dodge the question")
    #     while answer != True:
    #         answer = messagebox.askyesnocancel(title='The question is',message='Do you like me?',icon = 'warning')
    ans = None
    while ans != True:
        ans = messagebox.askyesnocancel(title='The imp question is ',message='Do you like me?',icon = 'warning')
        if ans == False:
            print("Think again :(")
        elif ans == None:
            print("You have to chose a option")
        else:
            print("Correct option ")
    

window = Tk()

button = Button(window,command=click,text='click me')
button.pack()

window.mainloop()