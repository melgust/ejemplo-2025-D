#include <iostream>
#include <string>
using namespace std;
int main () {
    string sentence;
    string VOWELS = "aeiou";
    string CONSONANTS = "bcdfghjklmnñpqrstvwxyz";
    cout << "Ingrese texto y presione enter para continuar: ";
    getline(cin, sentence);
    int countVowels = 0, countConsonants = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        for (int j = 0; j < VOWELS.length(); j++)
        {
            if (tolower(sentence[i]) == VOWELS[j]) {
                countVowels++;
                break;
            }
        }
        for (int j = 0; j < CONSONANTS.length(); j++)
        {
            if (tolower(sentence[i]) == CONSONANTS[j]) {
                countConsonants++;
                break;
            }            
        }
    }
    cout << "El texto tiene: " << countVowels << " vocales y " << countConsonants << " consonantes " << endl;
    return 0;
}