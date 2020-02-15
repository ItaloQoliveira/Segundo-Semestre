class dog:
    def __init__(self,color,age):
        self.color=color
        self.age=age
    def YearPassed(self):
        self.age+=1
    def bark(self):
        print("Whoof!!~~")
    def showinfo(self):
        print("DOG,{},{}".format(self.age,self.color))

nina=dog('brown',12)
nina.showinfo()
weed=dog('green',2)
weed.showinfo()