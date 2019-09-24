import requests,json


def pegar_dolar_na_moeda(nomemoeda='brl'):
    resposta= requests.get('http://www.floatrates.com/daily/usd.json')
    moedas=resposta.json()
    try:
        moeda_escolhida = moedas[nomemoeda]
    except:
        moeda_escolhida = moeda['brl']

    return (moeda_escolhida['name'],float(moeda_escolhida['rate']),moeda_escolhida['date'])


