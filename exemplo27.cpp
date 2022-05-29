#include <iostream>
#include <cstring>
#define TAM 3

using namespace std;

int main()
{
    struct Palavra
    {
        char palavra[20];
    } palavrita[TAM];

    for (int x = 0; x < TAM; x++)
    {
        cout << "\nDigite a palavra No" << x << ": ";
        cin >> palavrita[x].palavra;
    }

    for (int y = 0; y < TAM; y++)
    {
        cout << "\n"
             << palavrita[y].palavra << "\n";
    }

    for (int z = 0; z < TAM; z++)
    {
        cout << "============";
        for (int a = 0; palavrita[z].palavra[a] != '\0'; a++)
        {
            cout << "\n"
                 << palavrita[z].palavra[a];
            cout << "\n";
        }
        cout << "============";
    }

    cout << "\n\n";
    system("pause");
    return 0;
}