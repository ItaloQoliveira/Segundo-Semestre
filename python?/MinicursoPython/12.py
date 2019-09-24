with open('arquivo.txt','w') as file:
    file.write("Frase generica")

with open('arquivo.txt','r') as file_:
    conteudo=file_.read();
    print(conteudo)