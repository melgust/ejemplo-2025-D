class Cliente:
    nombre = ''
    cui = 0
    telefono = 0
    correo = ''
    direccion = ''
    apellido = ''

    def __init__(self, nombre, apellido, cui, direccion, telefono, correo):
        self.nombre = nombre
        self.apellido = apellido
        self.cui = cui
        self.direccion = direccion
        self.telefono = telefono
        self.correo = correo
    
    def getNombreCompleto(self):
        return self.nombre + ' ' + self.apellido
    
    def imprimirDatos(self):
        print('Nombre: ' + self.nombre)
        print('Apellido: ' + self.apellido)
        print('CUI: ' + str(self.cui))
        print('Direccion: ' + self.direccion)
        print('Telefono: ' + str(self.telefono))
        print('Correo: ' + self.correo)

clientes = []
cantidad = int(input('Ingrese la cantidad de clientes: '))

for i in range(cantidad):
    print('Ingrese los datos del cliente ' + str(i + 1))
    nombre = input('Nombre: ')
    apellido = input('Apellido: ')
    cui = int(input('CUI: '))
    direccion = input('Direccion: ')
    telefono = int(input('Telefono: '))
    correo = input('Correo: ')
    cliente = Cliente(nombre, apellido, cui, direccion, telefono, correo)
    clientes.append(cliente)

print('-----------------------------')
for cliente in clientes:
    cliente.imprimirDatos()
    print('Nombre completo: ' + cliente.getNombreCompleto())
    print('-----------------------------')