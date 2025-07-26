//Aplicacion que determina si un numero ingresado es par o impar
#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Ingrese un numero: ";
	cin >> number;
	if (number % 2 == 0) { //el simbolo % es MOD
		cout << "El numero " << number << " es par\n";
	} else {
		cout << "El numero " << number << " no es par\n";
	}
	return 0;
}