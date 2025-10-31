class Animal:

    def __init__(self, nombre, especie):
        self.nombre = nombre
        self.especie = especie

    def hacer_sonido(self):
        print("Animal haciendo sonido")

    def moverse(self):
        print("Animal se mueve")

    def comer(self):
        print("Animal comiendo")

    def informacion(self):
        print(f"Nombre: {self.nombre}")
        print(f"Especie: {self.especie}")

class Perro(Animal):

    def hacer_sonido(self):
        print("Perro ladra")

    def moverse(self):
        print("Perro corre")

    def comer(self):
        print("Perro come")

class Gato(Animal):

    def hacer_sonido(self):
        print("Gato maulla")

    def moverse(self):
        print("Gato trepa")

    def comer(self):
        print("Gato come")

class Pajaro(Animal):

    def hacer_sonido(self):
        print("Pajaro canta")

    def moverse(self):
        print("Pajaro vuela")

    def comer(self):
        print("Pajaro come")

class Vaca(Animal):

    def hacer_sonido(self):
        print("Vaca hace mu")

    def moverse(self):
        print("Vaca camina")

    def comer(self):
        print("Vaca come")

class Tuctuc(Animal):

    def hacer_sonido(self):
        print("Tuctuc hace tuc tuc")

    def moverse(self):
        print("Tuctuc corre")

    def comer(self):
        print("Tuctuc come")

try:
    animales = []
    animal = Perro("Firulais", "Perro")
    animales.append(animal)
    animal = Gato("Michi", "Gato")
    animales.append(animal)
    animal = Pajaro("Piolin", "Pajaro")
    animales.append(animal)
    animal = Vaca("Lola", "Vaca")
    animales.append(animal)

    for i in range(3):
        try:
            nombre = input("Ingrese el nombre del animal: ")
            opcion = int(input("Ingrese la especie del animal: \n1. Perro\n2. Gato\n3. Pajaro\n4. Vaca\n"))
            if opcion == 1:
                especie = "Perro"
            if opcion == 2:
                especie = "Gato"
            if opcion == 3:
                especie = "Pajaro"
            if opcion == 4:
                especie = "Vaca"
            animal = Animal(nombre, especie)
            animales.append(animal)
            print("Animal agregado")
        except Exception as e:
            print("Error al agregar el animal: ", e)
    
    animal = Tuctuc("Tuctuc", "Tuctuc")
    animales.append(animal)
    print("Tuctuc agregado")
    
    print("Animales agregados")
    for animal in animales:
        animal.informacion()
        animal.hacer_sonido()
        animal.moverse()
        animal.comer()
except Exception as e:
    print("Error: ", e)