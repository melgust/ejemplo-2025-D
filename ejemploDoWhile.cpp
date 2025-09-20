#include <iostream>
using namespace std;
int main()
{
    // 5! = 5 * 4 * 3 * 2 * 1 = 120
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
        do
        {
            result *= number;
            if (number == 1)
            {
                cout << number;
            }
            else
            {
                cout << number << " * ";
            }
            number--;
        } while (number > 0);
        cout << " = " << result << endl;
        cout << "Desea intentarlo de nuevo presione s, si desea salir presione cualquier tecla: ";
        cin >> out;
    } while (out == 's');
    return 0;
}