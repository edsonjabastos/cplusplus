#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int descobreIdade(int anoAtual, int anoNas);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int anoA, anoN;
    cout << "\nDigite o ano atual: ";
    cin >> anoA;
    cout << "\nDigite o ano de nascimento: ";
    cin >> anoN;
    cout << "\nVoce tera ate 31 de dezembro de " << anoA << " ===> " << descobreIdade(anoA, anoN) << " anos";
    cout << "\n\n";

    system("pause");
    return 0;
}

int descobreIdade(int anoAtual, int anoNas)
{
    return anoAtual - anoNas;
}