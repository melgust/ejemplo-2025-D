#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
string inverse(string);

int main()
{
    int number, number2;
    cout << "Ingrese numero: ";
    cin >> number;
    cout << "Ingrese segundo numero: ";
    cin >> number2;
    char option;
    while (true)
    {
        system("clear");
        cout << "Elija su operacion ingresando el simbolo:\n";
        cout << "+ ...... Suma\n";
        cout << "- ...... Resta\n";
        cout << "* ...... Multiplicacion\n";
        cout << "/ ...... Division\n";
        cin >> option;
        if (option == '+' || option == '-' || option == '*' || option == '/')
        {
            break;
        }
    }
    cin.ignore();
    string text;
    cout << "Ingrese una frase: ";
    getline(cin, text);
    cout << "Resultado de " << number << " " << option << " " << number2 << ": ";
    switch (option)
    {
    case '+':
        cout << addition(number, number2);
        break;
    case '-':
        cout << subtraction(number, number2);
        break;
    case '*':
        cout << multiplication(number, number2);
        break;
    case '/':
        cout << division(number, number2);
        break;
    }
    cout << endl;
    cout << "Texto invertido: " << inverse(text) << endl;
    return 0;
}

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int x, int y)
{
    return x / y;
}

string inverse(string text)
{
    string tmp = "";
    for (int i = text.length() - 1; i >= 0; i--)
    {
        tmp += text[i];
    }
    return tmp;
}
