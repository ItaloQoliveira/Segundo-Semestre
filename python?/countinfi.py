from itertools import count as infinite

limite= int(input("Contar até quanto?"))
#Using count
for i in infinite(0):
    print(i)
    if limite ==i:
        break
#not using count
num=0
while num<=limite:
    print(num)
    num+=1