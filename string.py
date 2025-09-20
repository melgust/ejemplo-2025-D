firstname = input('Bienvenido a UMG, escribe tus nombres: ')
lastname = input('Escribe tus apellidos: ')
VOWELS = "aeiou"
firstnameTmp = ""
lastnameTmp = ""
for character in firstname:
    for vowel in VOWELS:
        if character.lower() == vowel:
            firstnameTmp += '0'
for character in lastname:
    for vowel in VOWELS:
        if character.lower() == vowel:
            lastnameTmp += '1'
            break
print("Hola", firstnameTmp, lastnameTmp)