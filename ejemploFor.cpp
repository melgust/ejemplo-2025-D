#include <iostream>
using namespace std;
int main () {
    int i, number, total = 0;
    cout << "Ingrese numero: ";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0) {
            cout << i << endl;
            total += i;
        }
    }
    cout << "La sumatoria es: " << total << endl;
    return 0;
}
