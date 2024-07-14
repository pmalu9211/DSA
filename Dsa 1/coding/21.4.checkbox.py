from tkinter import *

window = Tk()

    def cc():
        if x.get() == 1:
            print("agree")
        else:
            print("not")
    
    x = IntVar()
    
    check = Checkbutton(window,
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
    
    window.mainloop()