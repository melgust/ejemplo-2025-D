#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char firstname[100];
    string lastname;
    string VOWELS = "aeiou";
    cout << "Bienvenido a UMG, escribe tu(s) nombre(s): ";
    cin.getline(firstname, 100, '\n');
    cout << "Escribe tu(s) apellido(s): ";
    getline(cin, lastname);
    int countChars = strlen(firstname);
    cout << "Te llamas: " << firstname << " " << lastname << endl;
    cout << "Tu nombre tiene " << countChars << " caracteres" << endl;
    countChars = lastname.length();
    cout << "Tu apellido tiene " << countChars << " caracteres" << endl;
    for (int i = 0; i < strlen(firstname); i++)
    {
        for (int j = 0; j < VOWELS.length(); j++)
        {
            if (tolower(firstname[i]) == VOWELS[j]) {
                firstname[i] = '0';
                break;
            }
        }
    }
    for (int i = 0; i < lastname.length(); i++)
    {
        for (int j = 0; j < VOWELS.length(); j++)
        {
            if (tolower(lastname[i]) == VOWELS[j]) {
                lastname[i] = '1';
                break;
            }
        }
    }
    cout << "Te nombre modificado es: " << firstname << " " << lastname << endl;
    return 0;
}