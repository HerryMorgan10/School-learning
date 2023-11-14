def calcularIva(Precio):
    IVA = Precio * 0.19
    return IVA


PrecioCompra = float(input("Ingrese el precio de su compra sin IVA: "))

IVA = calcularIva(PrecioCompra)

print("Precio de la compra sin IVA: ", PrecioCompra)
print("Precio de la compra con IVA: ", round(PrecioCompra+IVA))
