#include <iostream>
// #include <cstring>
#define TAM 3

using namespace std;

int main()
{
    struct Produto
    {
        int codigo;
        float precoCompra, precoVenda;
    } produtos[TAM];

    int x, num;

    for (int x = 0; x < TAM; x++)
    {
        cout << "\nCodigo do produto (0-10000):";
        cin >> num;
        while (num < 0 || num > 10000)
        {
            cout << "\nPreco invalido, digite novamente: ";
            cin >> num;
        }
        produtos[x].codigo = num;
        cout << "\nCusto do produto (R$): ";
        cin >> produtos[x].precoCompra;
        produtos[x].precoVenda = produtos[x].precoCompra * 1.6;
    }
    system("cls");

    cout << "\n=================================================\n|Codigo\t\t|Custo\t\t|Venda\t\t|\n";
    for (int x = 0; x < TAM; x++)
    {
        cout << "|" << produtos[x].codigo << "\t\t|R$" << produtos[x].precoCompra << "\t\t|R$" << produtos[x].precoVenda << "\t|";
        cout << "\n=================================================\n";
    }

    system("pause");
    return 0;
}