#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char out = 'n';
    do
    {
        int number, result = 1;
        cout << "Ingrese un numero entero mayor cero: ";
        cin >> number;
        if (number <= 0)
        {
            cout << "~_~ algo anda mal con tu comprension lectora, un cursito no te cearia mal\n";
            return 0;
        }
        cout << number << "! = ";
        while (number > 0)
        {
            result *= number;
            cout << number;
            if (number != 1)
            {
                cout << " * ";
            }
            number--;
        }
        cout << " = " << result << endl;
        cout << "Desea intentarlo de nuevo presione s, si desea salir presione cualquier tecla: ";
        cin >> out;
        system("clear");
    } while (out == 's');
    return 0;
}