#include <iostream>
#include <string>
using namespace std;
int main () {
    string sentence, sentence2 = "", sentence3 = "";
    cout << "Ingrese texto y presione enter para continuar: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ') {
            sentence3 += tolower(sentence[i]);
        }
    }
    for (int i = sentence3.length() - 1; i >= 0; i--)
    {
        sentence2 += sentence3[i];
    }
    if (sentence3.compare(sentence2) == 0) {
        cout << "true " << endl;
    } else {
        cout << "false " << endl;
    }
    return 0;
}