# Calculadora de medias.
n1=int(input("Dime un número: "))
n2=int(input("Dime otro número: "))
n3=int(input("Dime otro número más: "))
suma=n1+n2+n3
media=suma/3
print(media)

# Calculadora de medias.
import statistics
n1=int(input("Dime un número: "))
n2=int(input("Dime otro número: "))
n3=int(input("Dime otro número más: "))
print(statistics.median([n1,n2,n3]))

# Calculadora de medias de 2 a 4 valores.
g=int(input("¿Cuántos valores quieres mediar? "))
if(g==2):
    n1=int(input("Dime un número: "))
    n2=int(input("Dime otro número: "))
    suma=n1+n2
    media=suma/2
    print(media)
if(g==3):
    n1=int(input("Dime un número: "))
    n2=int(input("Dime otro número: "))
    n3=int(input("Dime otro número más: "))
    suma=n1+n2+n3
    media=suma/3
    print(media)
if(g==4):
    n1=int(input("Dime un número: "))
    n2=int(input("Dime otro número: "))
    n3=int(input("Dime otro número más: "))
    n4=int(input("Dime un último número número: "))
    suma=n1+n2+n3+n4
    media=suma/4
    print(media)
