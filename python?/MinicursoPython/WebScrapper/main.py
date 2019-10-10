from rottenscrapper import RottenScrapper
from dolar_value import pegar_dolar_na_moeda as dolar

file_name = 'currency.txt'

if __name__ == '__main__':
    scrapper= RottenScrapper()

    def menu():
        opcoes = ['Em cartaz essa semana','Top de bilheteria',
                'Em breve nos cinemas','Na tv hoje a noite',
                'Series populares no RT','Top em DVD e streaming']
        
        def desenha_cabecalho(texto):
            print()
            print('*'*(len((texto))+4))
            print(f'* {texto} *')
            print('*'*(len((texto))+4))
        def estreias_semana():
            dados_filmes = scrapper.get_estreias_semana()

            desenha_cabecalho(opcoes[0])
            for dados in dados_filmes:
                nota,nome,data_estreia = dados
                print(f'{nota} {nome} {data_estreia}')
        def top_bilheteria():
            with open(file_name,'r') as arquivo:
                currency = arquivo.readline().rstrip(' \n\t')
            valor_dolar = dolar(currency)
            dados_filmes=scrapper.get_top_bilheteria()
            desenha_cabecalho(opcoes[1])

            for dado in dados_filmes:
                nota,nome,bilheteria = dados
                bil_em_reais = float(bilheteria[1::-1]) *valor_dolar[1]

                print(f'{nota} - {nome} - R${bil_em_reais:.1f}{bilheteria[-1]}')
        
        def lancamento_cinema():
            dados_filmes= scrapper.get_lancamentos()
            desenha_cabecalho(opcoes[2])

            for dados in dados_filmes:
                nota,nome,data_estreia = dados
                print(f'{nota} - {nome} - {data_estreia} ')
        
        def novo_tv():
            dados_tv= scrapper.get_novo_tv()
            desenha_cabecalho(opcoes[3])
            for dados in dados_tv:
                nota,nome= dados
                print(f'{nota} - {nome}')
        def tv_popular():
            dados_tv=scrapper.get_tv_popular()
            desenha_cabecalho(opcoes[4])
            for dados in dados_tv:
                nota,nome= dados
                print(f'{nota} - {nome}')
        def top_dvd_streaming():
            top_dvd=scrapper.get_top_dvd_streaming()
            desenha_cabecalho(opcoes[5])
            for dados in top_dvd:
                nota,nome=dados
                print(f'{nota} - {nome}')

        def sair():
            exit()
        
        def opc_invalida():
            print('opção invalida')
        def get_acao(escolha):
            acoes={'1':estreias_semana,'2':top_bilheteria,'3':lancamento_cinema,'4':novo_tv,'5':tv_popular,'6':top_dvd_streaming,'sair':sair}
            return acoes.get(escolha,opc_invalida)()
        
        for opc_num, opcao in enumerate(opcoes,1):
            print(f'{opc_num} - {opcao}')
        
        get_acao(input('Escolha uma opção ou aperte [enter] para sair') or 'sair')

while(True):
    menu()
