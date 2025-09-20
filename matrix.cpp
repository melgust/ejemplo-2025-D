#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Cuantas filas necesita: ";
    cin >> rows;
    cout << "Cuantas columnas necesita: ";
    cin >> columns;
    int matrix[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Ingrese numero: [" << i + 1 << ", " << j + 1 <<"] ";
            cin >> matrix[i][j];
        }
    }
    cout << "Los datos de la matriz son: \n";
    int average, total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << "\t";
            total += matrix[i][j];
        }
        cout << endl;
    }
    average = total / (rows * columns);
    cout << "El promedio es: " << average << endl;
    return 0;
}