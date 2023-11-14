
def MiPrimerPrograma():
    x = 2
    y = 2
    print(x+y)


def saludador():
    print("Hola Saludador")


MiPrimerPrograma()
saludador()


def saludoSofisticado(nombre):
    nombre = input("Dime tu nombre:")
    print("Hola " + nombre)
    print("Se que tu nombre es " + nombre)


saludoSofisticado("David")


def MiDinero(euro):
    euro = input("¿Cuanto dinero tienes en Euro? ")
    print("Tienes: " + euro)
    x = 18.53
    y = (euro)
    print("Tienes: " + (x*y) + "Pesos Mexicanos")


MiDinero("Euros")
