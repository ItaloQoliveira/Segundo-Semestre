import requests as r
from bs4 import BeautifulSoup as bs

class Scrapper():
    
    def __init__(self,url):
        self.url = url
        self.resposta = r.get(url)
        try:
            self.html=self.get_html()
        except Exception as erro:
            print(erro)


    def get_html(self):
        resposta = self.resposta
        status = resposta.status_code
        if status==200:
            return resposta.text
        else:
            raise Exception("Erro ao acessar o site")        
    
    def parse_html(self):
        return bs(self.html,'html.parser')
