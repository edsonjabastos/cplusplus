#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

float num1, num2;

void troca();
void dobra();

int main()
{
	
    setlocale(LC_ALL, "Portuguese");

    cout << "\nNumero 1: ";
    cin >> num1;
    cout << "\nNumero 2: ";
    cin >> num2;
    cout << "\nInicialmente: " << num1 << "\t" << num2;
    troca();
    cout << "\nApos troca: " << num1 << "\t" << num2;
    dobra();
    cout << "\nApos dobra: " << num1 << "\t" << num2;
    cout << "\n\n";

    system("pause");
    return 0;
}

void troca()
{
    dobra();
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

void dobra()
{
    num1 *= 2;
    num2 *= 2;
}
