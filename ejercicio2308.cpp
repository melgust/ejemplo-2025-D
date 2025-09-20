#include <iostream>
using namespace std;
int main()
{
    bool out = true;
    cout << "Bienvenido\n";
    do
    {
        int option;
        cout << "Elija su opcion: \n";
        cout << "1 .... cuadrado\n";
        cout << "2 .... equis\n";
        cin >> option;
        int number;
        char character;
        cout << "Ingrese cantidad: ";
        cin >> number;
        cout << "Ingrese caracter: ";
        cin >> character;
        switch (option)
        {
        case 1:
            for (int i = 0; i < number; i++)
            {
                for (int j = 0; j < number; j++)
                {
                    if (i == 0 || i == number - 1 || j == 0 || j == number - 1)
                    {
                        cout << character << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < number; i++)
            {
                for (int j = 0; j < number; j++)
                {
                    if (i == j || j == number - 1 - i)
                    {
                        cout << character << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        default:
            cout << "~_~ algo anda mal";
            break;
        }
        cout << endl;
        do
        {
            cout << "Desea intentarlo de nuevo presione 1 si no presione 0: ";
            cin >> option;
        } while (option != 1 && option != 0);
        out = option == 0;
    } while (!out);
    return 0;
}