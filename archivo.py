path = 'numero.txt'
file = open(path, 'r')
content = file.read()
file.close()
number = int(content)
if number % 2 == 0:
    print("Numero", number, "es par")
else:
    print("Numero", number, "no es par")