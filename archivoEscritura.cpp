#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

string ALFABETO = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char cifradoCesar(char, int);

int main() {
    fstream readingFile("texto.txt");
	if (!readingFile.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo a leer" << endl;
        return 0;
    }
    string line;
    getline(readingFile, line);
    string nuevaCadena = "";
    for (int i = 0; i < line.length(); i++)
    {
        char letraActual = line[i];
        char letra = cifradoCesar(letraActual, 5);
        nuevaCadena = nuevaCadena + letra;
    }
    fstream writingFile("salida.txt", ios::out);
    if (!writingFile.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo para escribir" << endl;
        return 0;
    }
    writingFile << nuevaCadena << endl;
    readingFile.close();
    writingFile.close();
    return 0;
}

char cifradoCesar(char letra, int desplazamiento){
    char letraMayuscula = toupper(letra);
    int nuevaPosicion = 0;
    for (int i = 0; i < ALFABETO.length(); i++)
    {
        char letraAlfabeto = ALFABETO[i];
        if (letraAlfabeto == letraMayuscula) {
            nuevaPosicion = (i + desplazamiento) % 26;
        }
    }
    for (int i = 0; i < ALFABETO.length(); i++)
    {
        if (i == nuevaPosicion) {
            letra = ALFABETO[i];
            break;
        }
    }
    return letra;
}