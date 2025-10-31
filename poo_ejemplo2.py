class Vehiculo:

    def __init__(self, marca, modelo, color):
        self.marca = marca
        self.modelo = modelo
        self.color = color
    
    velocidad = 0
    encendido = False
    frenado = False

    def encender(self):
        self.encendido = True
        print("El vehiculo se ha encendido")
        print("Velocidad: ", self.velocidad)

    def apagar(self):
        self.encendido = False
        print("El vehiculo se ha apagado")
        print("Velocidad: ", self.velocidad)
    
    def acelerar(self):
        if self.encendido:
            self.velocidad += 10
            print("El vehiculo ha acelerado")
            print("Velocidad: ", self.velocidad)
        else:
            print("El vehiculo no puede acelerar porque esta apagado")

class Coche(Vehiculo):

    def frenar(self):
        if self.encendido:
            self.velocidad -= 10
            print("El vehiculo ha frenado")
            print("Velocidad: ", self.velocidad)
        else:
            print("El vehiculo no puede frenar porque esta apagado")

class Moto(Vehiculo):

    def frenar(self):
        if self.encendido:
            self.velocidad -= 5
            print("El vehiculo ha frenado")
            print("Velocidad: ", self.velocidad)
        else:
            print("El vehiculo no puede frenar porque esta apagado")

vehiculos = []

vehiculo = Coche("Toyota", "Corolla", "Rojo")
vehiculos.append(vehiculo)
vehiculo = Moto("Honda", "CBR", "Negro")
vehiculos.append(vehiculo)

for vehiculo in vehiculos:
    vehiculo.encender()
    vehiculo.acelerar()
    vehiculo.frenar()
    vehiculo.apagar()
