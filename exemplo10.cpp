#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void facil();
void legivel();
void juntando();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    juntando();

    system("pause");
    return 0;
}

void facil()
{
    cout << "\nAcho que estou entendendo\n";
}

void legivel()
{
    cout << "\nFica mais legivel\n";
}

void juntando()
{
    int x;
    for (x = 1; x <= 3; x++)
    {
        facil();
        legivel();
    }
}