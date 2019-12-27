nota100=0
nota50=0
nota20=0
nota10=0
nota5=0
nota2=0
moeda100=0
moeda50=0
moeda25=0
moeda10=0
moeda5=0
moeda1=0
val=float(input("Insira o valor:"))
while val>0:
    if(val>=100.00):
        nota100+=1
        val-=100
        continue
    if(val>=50):
        nota50+=1
        val-=50
        continue
    if(val>=20):
        nota20+=1
        val-=20
        continue
    if val>=10:
        nota10+=1
        val-=10
        continue
    if val>=5:
        nota5+=1
        val-=5
        continue
    if val>=2:
        nota2+=1
        val-=2
        continue
    if val>=1:
        moeda100+=1
        val-=1
        continue
    if val>=0.5:
        moeda50+=1
        val-=0.50
        continue
    if val>=0.25:
        moeda25+=1
        val-=0.25
        continue
    if val>=0.10:
        moeda10+=1
        val-=0.10
        continue
    if val>=0.5:
        moeda5+=1
        val-=0.5
        continue
    if val>=0.1:
        moeda1+=1
        val-=0.1
        continue
print("NOTAS:")
print("{} nota(s) de R$ 100.00")
print(f"{nota50} nota(s) de R$ 50.00")
print(f"{nota20} nota(s) de R$ 20.00")
print(f"{nota10} nota(s) de R$ 10.00")
print(f"{nota5} nota(s) de R$ 5.00")
print(f"{nota2} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{moeda100} moeda(s) de R$ 1.00")
print(f"{moeda50} moeda(s) de R$ 0.50")
print(f"{moeda25} moeda(s) de R$ 0.25")
print(f"{moeda10} moeda(s) de R$ 0.10")
print(f"{moeda5} moeda(s) de R$ 0.05")
print(f"{moeda1} moeda(s) de R$ 0.01")
