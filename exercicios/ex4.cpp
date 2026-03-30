#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/* 4) À partir de uma lista de nomes disponível em um arquivo TXT, transforma-los em nomes no formato citação bibliográfica. Exemplo:
José Antonio Santos Silva
SILVA, José A. S. */

int main() {
    ifstream arq("nomes.txt");
    string linha;

    while (getline(arq, linha)) {
        stringstream ss(linha);
        string nomes[10];
        int i = 0;

        while (ss >> nomes[i]) i++;

        string ult = nomes[i-1];
        for (char &c : ult) c = toupper(c);

        cout << ult << ", ";

        for (int j = 0; j < i-1; j++) {
            cout << nomes[j][0] << ". ";
        }
        cout << endl;
    }

    return 0;
}