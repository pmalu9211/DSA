from tkinter import *
window = Tk()
photo = PhotoImage(file="download.png")

window.iconphoto(True,photo)
label = Label(text=str("You are still gay"),
              bg="black",
              fg="green",
              font=("Arial",40,"bold"),
              relief="raised",
              bd=30,
              padx=100,
              pady=100,
              image=photo,
              compound="bottom",              
              )
window.title("Malu")
label.pack()
#label.place(x=100,y=100)

window.mainloop()