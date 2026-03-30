#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
/* 1) Receber através de digitação uma mensagem. 
Apresentar esta mensagem, centralizada, na linha 5 da tela.
À partir daí, cada letra desta mensagem deverá "cair", da linha 5 até a linha 20, simulando uma "cascata". Ao final, a mensagem deverá estar toda apresentada na linha 20. */ 

int main() {
    string msg;
    cout << "Digite a mensagem: ";
    getline(cin, msg);

    int espacos = (80 - msg.length()) / 2;

    for (int i = 0; i < espacos; i++) cout << " ";
    cout << msg << endl;

    for (int i = 6; i <= 20; i++) {
        this_thread::sleep_for(chrono::milliseconds(150));
        for (int j = 0; j < espacos; j++) cout << " ";
        cout << msg << endl;
    }

    return 0;
}