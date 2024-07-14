from tkinter import *

window = Tk()

def new_window():

    awindow = Tk()

    def cc():
        if x.get() == 1:
            print("agree")
        else:
            print("not")
    
    x = IntVar()
    
    check = Checkbutton(awindow,
                        text='Do you agree?',
                        variable=x,
                        fg='green',
                        bg='black',
                        onvalue=1,
                        offvalue=0,
                        activebackground='black',
                        activeforeground='green',
                        command=cc,
                        font=('Italic',20)
                        
                        )
    
    
    
    check.pack(side='left')
    
    



button = Button(window,text='create a new window',command=new_window)
button.pack()

window.mainloop()