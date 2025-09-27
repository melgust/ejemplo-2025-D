#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int factorial(int);
void mostrarTexto(string);
int addition(int, int);
void procedureAddition(int, int);

int main() {
    int number, number2;
    cout << "Ingrese numero: ";
    cin >> number;
    cout << "Ingrese segundo numero: ";
    cin >> number2;
    int result = factorial(number);
    string message = to_string(number) + "! = " + to_string(result);
    mostrarTexto(message);
    result = addition(number, number2);
    cout << "La sumatoria es: " << result;
    procedureAddition(number, number2);
    return 0;
}

int factorial(int number) {
    if (number <= 1) {
        return 1;
    }
    return number * factorial(number - 1);
}

void mostrarTexto(string text) {
    cout << text << endl;
}

int addition(int x, int y) {
    int result = x + y;
    return result;
}

void procedureAddition(int x, int y) {
    int result = x + y;
    cout << "\nSuma: " << result << endl;
}