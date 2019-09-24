lista = [58,14,2,69,87,68,45,21,0]

for posicao,numero in enumerate(lista,1):
    print(f'{posicao} - {numero}')

listaordenada = sorted(lista)
print(listaordenada)
lista.append(-1)
lista+= [10,20,30,40]
print(lista)
print(f'Maior: {max(lista)}\nMenor {min(lista)}')