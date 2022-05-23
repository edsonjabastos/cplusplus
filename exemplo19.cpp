#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct prod
    {
        char nomeProd[21];
        float valor;
    } produto1 = {"Martelo", 35.98}, produto2 = {"Furadeira", 256.75}, aux;
    if (strcmp(produto1.nomeProd, produto2.nomeProd) > 0)
    {
        aux = produto1;
        produto1 = produto2;
        produto2 = aux;
    }
    cout << "\nNome do Produto 1: " << produto1.nomeProd << "\tValor do Produto 1: " << produto1.valor;
    cout << "\nNome do Produto 2: " << produto2.nomeProd << "\tValor do Produto 2: " << produto2.valor;
    cout << "\n\n";

    system("pause");
    return 0;
}