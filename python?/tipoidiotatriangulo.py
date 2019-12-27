a=float(input("Insira o lado:"))
b=float(input("Insira o lado:"))
c=float(input("Insira o lado:"))
if b>a or c>a:
    if b>c:
        auxiliar=b
        b=a
        a=auxiliar
    elif c>b:
        auxiliar=c
        c=a
        a=auxiliar
    elif c==b:
        auxiliar=c
        c=a
        a=c
if(a>=b+c):
    print("Nao Triangulo")
else:
    if(a*a==(b*b)+(c*c)):
        print("Triangulo retangulo")
    elif(a*a>b*b+c*c):
        print("Retangulo obtusangulo")
    elif(a*a<b*b+c*c):
        print("Retangulo acutangulo")
    elif(a==b and b==c):
        print("Triangulo equilatero")
