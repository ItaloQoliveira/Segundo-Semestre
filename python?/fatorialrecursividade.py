def fatorial(num):
    if (num-1)>0:
        num*=fatorial(num-1)

    return num

x=int(input("Digite o número ai:"))

print(f"{x}! = {fatorial(x)}")
