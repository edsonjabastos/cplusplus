#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int contaMaiorQueH(double[], int tam, double altP);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double alturas[4], procuraAltura;

    for (int x = 0; x < 4; x++)
    {
        cout << "\nAltura " << x + 1 << ": ";
        cin >> alturas[x];
    }
    cout << "\n\nQual a altura minima? ";
    cin >> procuraAltura;
    cout << "\nRelacao de alturas: \n";
    for (int x = 0; x < 4; x++)
        cout << alturas[x] << "\t";
    cout << "\n\nTotal das alturas maiores que " << procuraAltura << ": " << contaMaiorQueH(alturas, 4, procuraAltura);
    cout << "\n\n";

    system("pause");
    return 0;
}

int contaMaiorQueH(double alts[], int tam, double altP)
{
    int conta = 0;
    for (int x = 0; x < tam; x++)
        if (alts[x] >= altP)
            conta++;
    return conta;
}
