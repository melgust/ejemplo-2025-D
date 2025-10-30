class Animal:

    def __init__(self, nombre, especie):
        self.nombre = nombre
        self.especie = especie

    def hacer_sonido(self):
        return "Haciendo sonido..."
    
    def moverse(self):
        return "Moviendo..."
    
class Perro(Animal):

    def hacer_sonido(self):
        return "Ladrando..."

    def moverse(self):
        return "Corriendo..."

class Gato(Animal):

    def hacer_sonido(self):
        return "Maullando..."

    def moverse(self):
        return "Saltando..."

class Loro(Animal):

    def hacer_sonido(self):
        return "Cantando..."

    def moverse(self):
        return "Volando..."

animales = [Perro("Fido", "Canino"), Gato("Mimi", "Felino"), Loro("Polly", "Ave")]

for i in range(3):
    nombre = input("Ingrese el nombre del animal: ")
    especie = int(input("Ingrese la especie del animal 1 Perro, 2 Gato, 3 Loro: "))
    if especie == 1:
        animal = Perro(nombre, 'Canino')
    if especie == 2:
        animal = Gato(nombre, 'Felino')
    if especie == 3:
        animal = Loro(nombre, 'Ave')
    animales.append(animal)

animal = Animal("Animal", "Animal")
animales.append(animal)

for animal in animales:
    print(animal.especie + ", nombre: " + animal.nombre + ": " + animal.hacer_sonido() + " y " + animal.moverse())