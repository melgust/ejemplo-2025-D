#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void saveStudentsToFile(Student[], int, string&);
int loadStudentsFromFile(Student[], int, string&);

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

void saveStudentsToFile(Student students[], int count, string &filename) {
    ofstream ofs(filename);
    if (!ofs) {
        cerr << "Error: no se pudo abrir el archivo para escribir: " << filename << endl;
        return;
    }
    // Optionally, write a header line
    ofs << "name,email,code,year,number\n";
    for (int i = 0; i < count; i++) {
        const Student &s = students[i];
        // You can choose your format (CSV, space-separated, etc.)
        ofs 
          << s.name << ","
          << s.email << ","
          << s.carne.code << ","
          << s.carne.year << ","
          << s.carne.number;
        ofs << "\n";
    }
    ofs.close();
    cout << "Datos guardados en: " << filename << endl;
}

int loadStudentsFromFile(Student students[], int maxCount, string &filename) {
    ifstream ifs(filename);
    if (!ifs) {
        cerr << "Error: no se pudo abrir el archivo para lectura: " << filename << endl;
        return 0;
    }

    string line;
    int count = 0;

    // Skip header
    getline(ifs, line);

    while (getline(ifs, line) && count < maxCount) {
        stringstream ss(line);
        string name, email, code, yearStr, numberStr;

        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, code, ',');
        getline(ss, yearStr, ',');
        getline(ss, numberStr, ',');

        Student s;
        s.name = name;
        s.email = email;
        s.carne.code = code;
        s.carne.year = stoi(yearStr);
        s.carne.number = stoi(numberStr);

        students[count++] = s;
    }

    ifs.close();
    return count;
}