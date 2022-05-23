#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void lineChar(char c, int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "\nEDSON JUNIO ALMEIDA DE BASTOS\n";
    lineChar('@', 30);
    cout << "\nEDSON JUNIO ALMEIDA DE BASTOS\n";
    lineChar('%', 30);
    cout << "\nEDSON JUNIO ALMEIDA DE BASTOS\n";
    lineChar('+', 30);
    cout << "\n\n";

    system("pause");
    return 0;
}

void lineChar(char c, int n)
{
    for (int x = 1; x <= n; x++)
    {
        cout << c;
    }
}