#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

string globalTmp;
string VOWELS = "aeiou";
string CONSONANTS = "bcdfghjklmnpqrstvwxyz";
string SYMBOLS = "!@#$%^&*()_+=-][{};':<>,./?|";

string removeDuplicates(string);
int countCharacter(string, string);


int main() {
    fstream file("text.txt");
	if (!file.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo a leer" << endl;
        return 0;
    }
    fstream fileWritable("out.txt", ios::out);
    if (!fileWritable.is_open()) {
        cout << "No se encontro o no se pudo abrir el archivo para escribir" << endl;
        return 0;
    }
    string line;
    while (getline(file, line))
    {
        fileWritable << line << endl;
        fileWritable << "Vocales: ";
        line = removeDuplicates(line);
        int total = countCharacter(line, VOWELS);
        fileWritable << "\tTotal: " << total;
        fileWritable << "\nConsonantes: ";
        total = countCharacter(line, CONSONANTS);
        fileWritable << "\tTotal: " << total;
        fileWritable << "\nSimbolos: ";
        total = countCharacter(line, SYMBOLS);
        fileWritable << "\tTotal: " << total <<endl;
    }
    file.close();
    fileWritable.close();
    return 0;
}

int countCharacter(string text, string characters)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < characters.length(); j++)
        {
            if (text[i] == characters[j])
            {
                count++;
                cout << text[i];
                break;
            }
        }
    }
    cout << endl;
    characters = "Los caracteres utilizados para este conteo fueron: " + characters;
    cout << characters << endl;
    return count;
}

string removeDuplicates(string text)
{
    string tmp = "";
    for (int i = 0; i < text.length(); i++)
    {
        bool found = false;
        for (int j = 0; j < tmp.length(); j++)
        {
            if (text[i] == tmp[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            tmp += text[i];
        }
    }
    return tmp;
}