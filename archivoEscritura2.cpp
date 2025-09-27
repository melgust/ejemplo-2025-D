#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

string convertIntToBinary(int);

int main() {
    fstream readingFile("datos.txt");
	if (!readingFile.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo a leer" << endl;
        return 0;
    }
    fstream writingFile("salida.txt", ios::out);
    if (!writingFile.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo para escribir" << endl;
        return 0;
    }
    string line;
    while (getline(readingFile, line))
    {
        string binary = convertIntToBinary(stoi(line));
        writingFile << line << " = " << binary << endl;
    }
    readingFile.close();
    writingFile.close();
    return 0;
}

string convertIntToBinary(int number) {
    if (number < 0) {
        return "Numero no valido";
    }
    string binary = "";
    while (number > 0)
    {
        int tmp = number % 2;
        binary = to_string(tmp) + binary;
        number = number / 2;
    }
    return binary;
}