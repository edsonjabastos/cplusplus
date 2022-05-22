#include <iostream>

using namespace std;

void asteriscos()
{
    for (int x = 1; x < 20; x++)
        cout << "*";
}
int main()
{
    cout << "\nEstudo de Funcoes\n";
    asteriscos();
    cout << "\nConhecendo tipo void\n";
    asteriscos();
    cout << "\nSem parametros\n";
    asteriscos();
    cout << "\n\n";
    system("pause");
    return 0;
}
