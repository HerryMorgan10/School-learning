
import random


def max(EleccionDeNumero, aleatorio):
    print("El número aleatorio es: "+str(aleatorio))
    if EleccionDeNumero < aleatorio:
        print(aleatorio)
    if EleccionDeNumero > aleatorio:
        print(EleccionDeNumero)
    else:
        print("Son Iguales")


def EleccionDeNumero():
    EleccionDeNumero = int(input("¿cual es tu número Favorito?: "))
    aleatorio = random.randint(1, 200)
    max(EleccionDeNumero, aleatorio)


EleccionDeNumero()
