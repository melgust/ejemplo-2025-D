print('Bienvenido')
while True:
    print('1. Cuadrado')
    print('2. Equis')
    option = int(input())
    number = int(input('Ingrese numero: '))
    character = input('Ingrese caracter: ')
    if option == 1:
        for i in range(0, number):
            for j in range(0, number):
                if i == 0 or i == number - 1 or j == 0 or j == number - 1:
                    print(character, end='')
                else:
                    print(' ', end='')
            print()
    while True:
        option = int(input('Desea intentarlo de nuevo presione 1 si no presione 0: '))
        if option == 0 or option == 1:
            break;
    out = option == 0
    if option == False:
        break;