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


int main()
{
    int total;
    cout << "Cuantos alumnos quiere ingresar?: ";
    cin >> total;
    cin.ignore();
    Student students[total];
    cout << "Bienvenido a la clase de struct - UMG \n";
    for (int i = 0; i < total; i++)
    {
        cout << "Ingrese los datos del alumno no. " << i + 1 << endl;
        Student student;
        cout << "Escribe tu nombre: ";
        getline(cin, student.name);
        cout << "Escribe tu correo: ";
        getline(cin, student.email);
        cout << "Escribe el codigo de carrera: ";
        getline(cin, student.carne.code);
        cout << "Escribe el anio de carrera: ";
        cin >> student.carne.year;
        cin.ignore();
        cout << "Escribe numero de estudiante: ";
        cin >> student.carne.number;
        cin.ignore();
        students[i] = student;
    }
    cout << "Los datos ingresados son:\n";
    for (int i = 0; i < total; i++)
    {
        cout << "Alumno no. " << i + 1 << endl;
        Student student = students[i];
        cout << "Nombre: " << student.name << endl;
        cout << "Correo: " << student.email << endl;
        cout << "Carne: " << student.carne.code << "-" << student.carne.year << "-" << student.carne.number << endl;
    }
    return 0;
}