#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct prod
    {
        char nomeProd[21];
        float valor;
    } produtoX, produtoY, aux;

    cout << "\nNome do primeiro produto: ";
    cin.getline(produtoX.nomeProd, 21);
    cout << "\nValor: ";
    cin >> produtoX.valor;
    cin.get();

    cout << "\nNome do segundo produto: ";
    cin.getline(produtoY.nomeProd, 21);
    cout << "\nValor: ";
    cin >> produtoY.valor;
    cin.get();

    if(strcmp(produtoX.nomeProd, produtoY.nomeProd) > 0)
    {
        aux = produtoX;
        produtoX = produtoY;
        produtoY = aux;
    }

    cout << "\nNome do Produto 1: " << produtoX.nomeProd << "\t" << produtoX.valor;
    cout << "\nNome do Produto 2: " << produtoY.nomeProd << "\t" << produtoY.valor;
    cout << "\n\n";

    system("pause");
    return 0;
}
