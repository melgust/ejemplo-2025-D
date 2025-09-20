#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main() {
    fstream file("oracion.txt");
	if (!file.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo" << endl;
        return 0;
    }
    string line, line2;
    getline(file, line);
    getline(file, line2);
    file.close();
    int number1 = stoi(line);
    int number2 = stoi(line2);
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    return 0;
}