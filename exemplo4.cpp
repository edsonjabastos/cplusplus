#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor, percentual, reajustado;
    cout << "\nDigite o valor que devera ser reajustado R$";
    cin >> valor;
    cout << "\nDigite o valor do percentual de reajuste de 0 a 100:\n";
    cin >> percentual;
    reajustado = valor + valor * percentual / 100;
    cout << "\nValor reajustado R$" << reajustado << endl << endl;

    system("pause");
    return 0;
}