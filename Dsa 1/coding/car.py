class Car:
    wheels = 4

    def __init__(self,make,model,year,color):
        self.a = make
        self.d = model 
        self.c = year
        self.b = color
    def drive(self):
        print("The "+self.d+" is now driving")
    def stop(self):
        
        print(self)
        
