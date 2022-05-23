#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

float areaRetangulo(float b, float h);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura;

    cout << "\nDigite a base de retangulo: ";
    cin >> base;
    cout << "\nDigite a altura de retangulo: ";
    cin >> altura;
    cout << "\nArea: " << areaRetangulo(base, altura) << " m2";
    cout << "\n\n";

    system("pause");
    return 0;
}

float areaRetangulo(float b, float h)
{
    return b * h;
}