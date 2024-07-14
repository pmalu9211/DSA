from tkinter import *
from tkinter import filedialog

window = Tk()

def g():
    filepath = filedialog.askopenfilename()
    # print(filepath)
    file = open(filepath,'r')
    print(file.read())
    file.close()

button = Button(text='File path',command=g)
button.pack()

window.mainloop()