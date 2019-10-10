from scrapper import Scrapper

class RottenScrapper(Scrapper):

    def __init__(self):
        super().__init__('http://www.rottentomatoes.com')

        self.dom = self.parse_html()
    
    def __str__(self):
        return self.dom.text    
        
    def get_dados_coluna_cinema(self,id_secao):
        div_cinema = self.dom.find(id=id_secao)

        dados=[]
        for linha in div_cinema.find_all('tr'):
            try:
                nota = linha.find(class_='left_col').find(class_='tMeterScore').text
            except AttributeError as ex:
                nota ='Sem Nota'
            nome = linha.find(class_='middle_col').a.text

            lancamento_bilheteria = linha.find(class_='right_col').a.text.strip(' \n\t')
            dados_filme = tuple(map(self.remove_espaco,(nota,nome,lancamento_bilheteria)))
            dados.append(dados_filme)
            
        return dados
    def get_dados_coluna_tv(self,id_secao):
        if id_secao=='New-On-Tv':
            div_tv=self.dom.find('h2',string ='New TV Tonight').parent.table
        else:
            div_tv=self.dom.find(id = id_secao)
        dados =[]

        for linha in div_tv.find_all('tr'):
            try:
                nota= linha.find(class_='left_col').find(class_='tMeterScore').text
            except AttributeError as ex:
                nota='Sem Nota'
            nome = linha.find(class_='middle_col').a.text
            dados_tv = tuple(map(self.remove_espaço,(nota,nome)))
            dados.append(dados_tv)
        return dados
        
    def remove_espaco(self,texto):
        return texto.strip(' \n\t')
    
    def get_estreias_semana(self):
        return self.get_dados_coluna_cinema(id_secao='Opening')
    
    def get_top_bilheteria(self):
        return self.get_dados_coluna_cinema('Top-Box-Office')

    def get_lancamentos(self):
        return self.get_dados_coluna_cinema('Top-Coming-Soon')

    def get_novo_tv(self):
        return self.get_dados_coluna_tv('New-On-Tv')
    
    def get_tv_popular(self):
        return self.get_dados_coluna_tv('homepage-tv-bottom')
    
    def get_top_dvd_streaming(self):
        return self.get_dados_coluna_tv('Top-DVD')