#include <iostream>
#include <string>
using namespace std;

// ===== CLASSE DATA =====
class Data {
private:
    int dia, mes, ano;

public:
    // construtor
    Data(int d = 0, int m = 0, int a = 0) {
        dia = d;
        mes = m;
        ano = a;
    }

    // getters
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAno() { return ano; }

    // setters
    void setDia(int d) { dia = d; }
    void setMes(int m) { mes = m; }
    void setAno(int a) { ano = a; }
};

// ===== CLASSE CONTATO =====
class Contato {
private:
    string nome;
    string email;
    string telefone;
    Data dtnasc;

public:
    // construtor
    Contato(string n = "", string e = "", string t = "", Data d = Data()) {
        nome = n;
        email = e;
        telefone = t;
        dtnasc = d;
    }

    // getters
    string getNome() { return nome; }
    string getEmail() { return email; }
    string getTelefone() { return telefone; }
    Data getData() { return dtnasc; }

    // setters
    void setNome(string n) { nome = n; }
    void setEmail(string e) { email = e; }
    void setTelefone(string t) { telefone = t; }
    void setData(Data d) { dtnasc = d; }

    // calcular idade (ano fixo 2026)
    int idade() {
        return 2026 - dtnasc.getAno();
    }
};

// ===== MAIN =====
int main() {
    Contato contatos[5];

    // cadastro
    for (int i = 0; i < 5; i++) {
        string nome, email, telefone;
        int dia, mes, ano;

        cout << "\nContato " << i + 1 << endl;

        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Email: ";
        getline(cin, email);

        cout << "Telefone: ";
        getline(cin, telefone);

        cout << "Dia nascimento: ";
        cin >> dia;
        cout << "Mes nascimento: ";
        cin >> mes;
        cout << "Ano nascimento: ";
        cin >> ano;

        Data d(dia, mes, ano);
        contatos[i] = Contato(nome, email, telefone, d);
    }

    // exibição
    cout << "\n=== CONTATOS ===\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nNome: " << contatos[i].getNome() << endl;
        cout << "Email: " << contatos[i].getEmail() << endl;
        cout << "Telefone: " << contatos[i].getTelefone() << endl;
        cout << "Idade: " << contatos[i].idade() << endl;
    }

    return 0;
}