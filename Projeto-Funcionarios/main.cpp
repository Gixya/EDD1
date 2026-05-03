#include <iostream>
#include <vector>
using namespace std;

struct Funcionario {
    int prontuario;
    string nome;
    double salario;
};

vector<Funcionario> lista;

// Função para verificar se prontuário já existe
bool existeProntuario(int prontuario) {
    for (auto &f : lista) {
        if (f.prontuario == prontuario) {
            return true;
        }
    }
    return false;
}

// Incluir funcionário
void incluir() {
    Funcionario f;

    cout << "Digite o prontuario: ";
    cin >> f.prontuario;

    if (existeProntuario(f.prontuario)) {
        cout << "Erro: prontuario ja cadastrado!\n";
        return;
    }

    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, f.nome);

    cout << "Digite o salario: ";
    cin >> f.salario;

    lista.push_back(f);
    cout << "Funcionario cadastrado com sucesso!\n";
}

// Excluir funcionário
void excluir() {
    int prontuario;
    cout << "Digite o prontuario para excluir: ";
    cin >> prontuario;

    for (auto it = lista.begin(); it != lista.end(); it++) {
        if (it->prontuario == prontuario) {
            lista.erase(it);
            cout << "Funcionario removido!\n";
            return;
        }
    }

    cout << "Funcionario nao encontrado.\n";
}

// Pesquisar funcionário
void pesquisar() {
    int prontuario;
    cout << "Digite o prontuario para pesquisar: ";
    cin >> prontuario;

    for (auto &f : lista) {
        if (f.prontuario == prontuario) {
            cout << "Nome: " << f.nome << endl;
            cout << "Salario: " << f.salario << endl;
            return;
        }
    }

    cout << "Funcionario nao encontrado.\n";
}

// Listar funcionários
void listar() {
    double totalSalarios = 0;

    if (lista.empty()) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }

    for (auto &f : lista) {
        cout << "Prontuario: " << f.prontuario << endl;
        cout << "Nome: " << f.nome << endl;
        cout << "Salario: " << f.salario << endl;
        cout << "----------------------\n";

        totalSalarios += f.salario;
    }

    cout << "Total dos salarios: " << totalSalarios << endl;
}

int main() {
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "0 - Sair\n";
        cout << "1 - Incluir\n";
        cout << "2 - Excluir\n";
        cout << "3 - Pesquisar\n";
        cout << "4 - Listar\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1: incluir(); break;
            case 2: excluir(); break;
            case 3: pesquisar(); break;
            case 4: listar(); break;
            case 0: cout << "Encerrando...\n"; break;
            default: cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}
