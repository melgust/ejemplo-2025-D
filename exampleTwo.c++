#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int size;
    cout << "Ingrese el tamanio del vector: ";
    cin >> size;
    int vector[size];
    for (int i = 0; i < size; i++)
    {
        //int randomNumber = (rand() % 51) + 50;
        int randomNumber;
        cout << "Ingrese numero: ";
        cin >> randomNumber;
        vector[i] = randomNumber;
    }
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << ", ";
        if (vector[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "\nPares: " << even;
    cout << "\nImpares: " << odd << endl;
    return 0;
}