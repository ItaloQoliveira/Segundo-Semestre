def somaesub(n1,n2):
    return((n1+n2),(n1-n2))
    
a=float(input("Insira um número: "))
b=float(input("Insira outro número: "))
soma,sub=somaesub(a,b)
print(f'A soma dos dois numeros é {soma}\nA subtração dos dois numeros é {sub}')