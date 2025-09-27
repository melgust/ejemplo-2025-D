#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

string VOWELS = "aeiou";
string CONSONATS = "bcdfghjklmnpqrstvwxyz";
string SYMBOLS = "~!@#$%^&*()_+{}:?></?;'[]=-.";

int factorial(int);
void mostrarTexto(string);
int addition(int, int);
void procedureAddition(int, int);
int countCharacters(string, string);

int main() {
    int number, number2;
    cout << "Ingrese numero: ";
    cin >> number;
    cout << "Ingrese segundo numero: ";
    cin >> number2;
    cin.ignore();
    string text;
    cout << "Ingrese una frase: ";
    getline(cin, text);
    int total = countCharacters(text, VOWELS);
    cout << "Tiene " << total << " vocales" << endl;
    total = countCharacters(text, CONSONATS);
    cout << "Tiene " << total << " consonantes" << endl;
    total = countCharacters(text, SYMBOLS);
    cout << "Tiene " << total << " caracteres especiales" << endl;
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

int countCharacters(string input, string characters) {
    int total = 0;
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j < characters.length(); j++)
        {
            if (input[i] == characters[j]) {
                total++;
                break;
            }
        }
    }
    return total;
}