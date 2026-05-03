# Projeto Funcionários em C++

Programa desenvolvido em C++ para gerenciar uma lista de funcionários utilizando uma estrutura de dados em memória.

Cada funcionário possui os seguintes atributos:
- Prontuário (int)
- Nome (string)
- Salário (double)

O programa apresenta um menu com as seguintes opções:
0 - Sair
1 - Incluir funcionário
2 - Excluir funcionário
3 - Pesquisar funcionário
4 - Listar funcionários

Regras:
- Não é permitido cadastrar funcionários com o mesmo prontuário
- A pesquisa é realizada pelo prontuário
- A listagem exibe todos os funcionários e o total dos salários

Como executar:
1. Compilar o programa:
   g++ main.cpp -o funcionarios
2. Executar:
   ./funcionarios

Objetivo:
Atividade acadêmica para prática de structs, vetores, funções e manipulação de dados em C++.
