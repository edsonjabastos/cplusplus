#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void troca(float &a, float &b);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    cout << "\nDigite o primeiro numero: ";
    cin >> n1;
    cout << "\nDigite o segundo numero: ";
    cin >> n2;
    cout << "Antes da troca: \n\t Primeiro => " << n1 << "\n\t Segundo => " << n2;
    troca(n1, n2);
    cout << "\nApos a troca: \n\t Primeiro => " << n1 << "\n\t Segundo => " << n2 << endl
         << endl;

    system("pause");
    return 0;
}

void troca(float &a, float &b)
{
    float aux;
    aux = a;
    a = b;
    b = aux;
}