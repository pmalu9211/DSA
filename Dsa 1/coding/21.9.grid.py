from tkinter import *

window = Tk()

a = Label(window,text='First name: ').grid(row = 0,column = 0)
aa = Entry(window)

b = Label(window,text = 'Last name : ').grid(row=1,column=0)
bb = Entry(window)
def submit():
    f = aa.get()
    ff = bb.get()
    print('you have entered '+f+ff)
aa.grid(row=0,column=1)
bb.grid(row=1,column=1)

button1 = Button(window,command=submit,text='submit').grid(row = 2,column=0)

window.mainloop()