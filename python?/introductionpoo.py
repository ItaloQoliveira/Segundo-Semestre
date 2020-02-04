class cat: #creating the class cat
    def __init__(self,color,age): #Defining attributes for cat
        self.color=color 
        self.age=age
    def meow(self): #A method to just print something, the self as argument is a must
        print("Meeeow!!~~")
    def yearpassed(self): #Adding one year to the cat's age
        self.age+=1
    def showinfo(self): # Method to print all the info on the screen
        print(self.age)
        print(self.color)
    def info(self): #A different way to get the info
        return self.age,self.color
#Now i'm gonna test somethings to get more comfortable using objects
morgana= cat("black",4)
morgana.showinfo()
age,color= morgana.info()
idade,cor=morgana.age,morgana.color
print("Morgana is a {} cat, and is {} years old".format(color,age))
#print("Morgana is a {} cat, and is {} years old".format(cor,idade))
morgana.yearpassed()
morgana.showinfo()
morgana.meow()