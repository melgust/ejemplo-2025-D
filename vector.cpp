#include <iostream>
using namespace std;
int main()
{
    int quantity;
    cout << "Cuantos valores quiere almacenar: ";
    cin >> quantity;
    int vector[quantity];
    for (int i = 0; i < quantity; i++)
    {
        cout << "Ingrese numero: ";
        cin >> vector[i];
    }
    cout << "\nLos valores del vector son: \n";
    for (int i = 0; i < quantity; i++)
    {
        cout << vector[i] << "\n";
    }
    cout << endl;
    return 0;
}