def calcularNota(n1, n2, n3):
    return (n1*0.3) + (n2*0.4) + (n3*0.2)


n1 = float(input("Ingrese la nota de Matemáticas: "))
n2 = float(input("Ingrese la nota de Ingles: "))
n3 = float(input("Ingrese la nota de Historia: "))


notaFinal = calcularNota(n1, n2, n3)

print("Su nota final es: ", round(notaFinal))
