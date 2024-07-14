from tkinter import *
window = Tk()

entry = Entry(window,
              font=("Arial",40),
              fg="green",
              bg='black',
            )

entry.insert(0,"Enter the password")

def text():
    a = entry.get()
    print("you entered : " + a)

def delet():
    entry.delete(0,END)

def backspace():
    entry.delete(len(entry.get())-1,END)

button = Button(window,
                font=("Arial",10),
                text="Submit",
                fg="black",
                bg="green",
                command=text)

dell = Button(window,
             text='Delete',
             font=('Arial',10),
             fg='black',
             bg='green',
             command=delet)

backk = Button(window,
             text='backspace',
             font=('Arial',10),
             fg='black',
             bg='green',
             command=backspace)

button.pack(side="right")
entry.pack(side="left")
dell.pack(side='right')
backk.pack(side='right')
window.mainloop()