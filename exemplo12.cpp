#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5] = {18, 23, 52, 13, 15};
    cout << "\nValor do primeiro elemento   : " << vetor[0] << endl;
    cout << "\nEndereco do primeiro elemento: " << &vetor[0] << endl;
    cout << "\nEndereco do vetor           : " << &vetor << endl;
    cout << "\nVetor                        : " << vetor;
    cout << "\n\n";

    system("pause");
    return 0;
}