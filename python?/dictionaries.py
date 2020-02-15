perfis={'jose':16
}
print("Vamo lá. Prepare as informaçoes para a coleta")
x=1
while x==1:
    nome=input("Insira o nome do cliente,para parar os cadastros insira 0 ")
    if nome=='0':
        break
    idade=input('Insira a idade do cliente')
    perfis[nome]=idade

print(perfis)