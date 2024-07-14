from tkinter import *

window = Tk()
window.geometry("400x400")
photo = PhotoImage(file="download.png")
a = 0
def count():
    global a 
    a = a + 1
    print(a)

button = Button(window,text="Click me for free",
                padx=10,
                pady=10,
                font=("Arial",10,"bold"),
                image=photo,
                compound="top",
                state=ACTIVE,
                fg="green",
                bg="black",
                command=count,
                activebackground="black",
                activeforeground="green")
button.pack()

window.mainloop()