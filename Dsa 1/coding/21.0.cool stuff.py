from tkinter import *

window = Tk()
window.geometry("800x800")
window.title("Malu")
 
image = PhotoImage(file='gg.png')
window.iconphoto(True,image)
window.config(background="blue")
window.mainloop()