 #include <iostream>
using namespace std;

const int TAM = 30;

// Pilha com vetor
struct PilhaVetor {
    int dados[TAM];
    int topo = -1;
};

void pushVetor(PilhaVetor &p, int valor) {
    p.dados[++p.topo] = valor;
}

int popVetor(PilhaVetor &p) {
    return p.dados[p.topo--];
}

bool vaziaVetor(PilhaVetor p) {
    return p.topo == -1;
}

// Pilha com lista
struct No {
    int valor;
    No* prox;
};

struct PilhaLista {
    No* topo = nullptr;
};

void pushLista(PilhaLista &p, int valor) {
    No* novo = new No;

    novo->valor = valor;
    novo->prox = p.topo;

    p.topo = novo;
}

int popLista(PilhaLista &p) {
    No* temp = p.topo;

    int valor = temp->valor;

    p.topo = temp->prox;

    delete temp;

    return valor;
}

bool vaziaLista(PilhaLista p) {
    return p.topo == nullptr;
}

int main() {

    PilhaVetor paresV, imparesV;
    PilhaLista paresL, imparesL;

    int num;
    int anterior = -1;

    for (int i = 0; i < TAM; i++) {

        do {
            cout << "Digite um numero: ";
            cin >> num;

            if (num <= anterior) {
                cout << "Digite um numero maior que o anterior.\n";
            }

        } while (num <= anterior);

        anterior = num;

        if (num % 2 == 0) {

            pushVetor(paresV, num);
            pushLista(paresL, num);

        } else {

            pushVetor(imparesV, num);
            pushLista(imparesL, num);
        }
    }

    cout << "\nPares - Vetor\n";

    while (!vaziaVetor(paresV)) {
        cout << popVetor(paresV) << endl;
    }

    cout << "\nImpares - Vetor\n";

    while (!vaziaVetor(imparesV)) {
        cout << popVetor(imparesV) << endl;
    }

    cout << "\nPares - Lista\n";

    while (!vaziaLista(paresL)) {
        cout << popLista(paresL) << endl;
    }

    cout << "\nImpares - Lista\n";

    while (!vaziaLista(imparesL)) {
        cout << popLista(imparesL) << endl;
    }

    return 0;
}
