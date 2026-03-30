#include <iostream>
#include <string>

using namespace std;

/* 2) Receber através de digitação uma mensagem. 
Informar se esta mensagem é ou não um dado palíndromo (no caso de haver espaços no texto, desconsiderá-los para a verificação). Exemplos:
OVO, ARARA, SOCORRAM ME SUBI NO ONIBUS EM MARROCOS */

int main() {
    string msg, limpa = "", inv = "";

    cout << "Digite a mensagem: ";
    getline(cin, msg);

    for (char c : msg) {
        if (c != ' ') limpa += tolower(c);
    }

    for (int i = limpa.size() - 1; i >= 0; i--) {
        inv += limpa[i];
    }

    if (limpa == inv)
        cout << "E palindromo\n";
    else
        cout << "Nao e palindromo\n";

    return 0;
}