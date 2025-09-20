#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string sentence, VOWELS = "AEIOU";
    cout << "Bienvenido a UMG, escribe tu(s) nombre(s): ";
    getline(cin, sentence);
    int count = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        for (int j = 0; j < VOWELS.length(); j++)
        {
            if (toupper(sentence[i]) == VOWELS[j]) {
                count += 1;
            }
        }
    }
    cout << "La cantidad de vocales es: " << count << endl;
    return 0;
}