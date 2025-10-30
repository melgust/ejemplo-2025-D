class Vehiculo:
    
    def __init__(self, marca, modelo, color):
        self.marca = marca
        self.modelo = modelo
        self.color = color

    def info(self):
        print(f"Marca: {self.marca}, Modelo: {self.modelo}, Color: {self.color}")

    def arrancar(self):
        print("El vehículo ha arrancado")
    
    def detener(self):
        print("El vehículo se ha detenido")

class Auto(Vehiculo):

    def arrancar(self):
        print(f"El auto {self.marca} {self.modelo} está encendido")
    
    def detener(self):
        print(f"El auto {self.marca} {self.modelo} se ha detenido")

class Bicicleta(Vehiculo):

    def arrancar(self):
        print(f"La bicicleta {self.marca} {self.modelo} está en movimiento")

    def detener(self):
        print(f"La bicicleta {self.marca} {self.modelo} se ha detenido")

    def pedalear(self):
        print(f"La bicicleta {self.marca} {self.modelo} está pedaleando")

class Avion(Vehiculo):

    def arrancar(self):
        print(f"El avión {self.marca} {self.modelo} está en vuelo")

    def detener(self):
        print(f"El avión {self.marca} {self.modelo} se ha detenido")

vehiculos = [
    Auto("Toyota", "Corolla", "Rojo"),
    Bicicleta("Trek", "FX 3", "Negro"),
    Avion("Boeing", "747", "Blanco")
]

for vehiculo in vehiculos:
    vehiculo.info()
    vehiculo.arrancar()
    vehiculo.detener()