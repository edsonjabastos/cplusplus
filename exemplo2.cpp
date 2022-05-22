#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;
void menu()
{
    // system("cls");
    cout << "\nMenu\n";
    cout << "\n1 -> Pilha\n";
    cout << "\n2 -> Fila\n";
    cout << "\n3 -> Lista\n";
    cout << "\n4 -> Arvore\n";
    cout << "\n5 -> Grafo\n";
    cout << "\n6 -> Sair\n";
    cout << "\nOpcao\n";
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    cout << "Escolha a opção desejada.";
    menu();
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "vamos estudar Pilha\n";
        break;
    case 2:
        cout << "vamos estudar Fila\n";
        break;
    case 3:
        cout << "vamos estudar Lista\n";
        break;
    case 4:
        cout << "vamos estudar Árvore\n";
        break;
    case 5:
        cout << "vamos estudar Grafo\n";
        break;
    case 6:
        cout << "Saindo\n";
        break;
    }
    system("pause");
    return 0;
}
