#include <iostream>
#include <string.h>
using namespace std;

typedef struct 
{
    string code;
    int year;
    int number;
} Carne;


typedef struct 
{
  string name;
  string email;
  Carne carne;
} Student;


int main() {
    int total;
    cout << "Cuantos alumnos desea almacenar: ";
    cin >> total;
    cin.ignore();
    Student students[total];
    cout << "Bienvenido a la clase de struct - UMG\n";
    for (int i = 0; i < total; i++)
    {
        cout << "Guardando datos de alumno no. " << i + 1 << endl;
        Student student;
        cout << "Escriba su nombre: ";
        getline(cin, student.name);
        cout << "Escriba su correo: ";
        getline(cin, student.email);
        cout << "Escriba el codigo de carne: ";
        getline(cin, student.carne.code);
        cout << "Escriba el anio de carne: ";
        cin >> student.carne.year;
        cin.ignore();
        cout << "Escriba el correlativo de carne: ";
        cin >> student.carne.number;
        cin.ignore();
        students[i] = student;
    }
    cout << "Los datos capturados son:\n";
    for (int i = 0; i < total; i++)
    {
        cout << "Mostrando datos de alumno no. " << i + 1 << endl;
        Student student = students[i];
        cout << "Nombre: " << student.name << endl;
        cout << "Correo electronico: " << student.email << endl;
        cout << "Carne: " << student.carne.code << "-" << student.carne.year << "-" << student.carne.number << endl;
    }
    return 0;
}