#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/* 3) À partir de uma lista de nomes disponível em um arquivo TXT, transforma-los em nomes no formato agenda telefônica. Exemplo:
José Antonio Santos Silva   
Silva, José Antonio Santos */

int main() {
    ifstream arq("nomes.txt");
    string linha;

    while (getline(arq, linha)) {
        stringstream ss(linha);
        string nomes[10];
        int i = 0;

        while (ss >> nomes[i]) i++;

        cout << nomes[i-1] << ", ";
        for (int j = 0; j < i-1; j++) {
            cout << nomes[j] << " ";
        }
        cout << endl;
    }

    return 0;
}