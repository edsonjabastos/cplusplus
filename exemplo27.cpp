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

    cout << "============";
    for (int x = 0; x < TAM; x++)
    {
        cout << "\n"
             << palavrita[x].palavra << "\n";
    }

    for (int x = 0; x < TAM; x++)
    {
        cout << "============";
        for (int a = 0; palavrita[x].palavra[a] != '\0'; a++)
        {
            cout << "\n"
                 << palavrita[x].palavra[a];
            cout << "\n";
        }
    }

    for (int x = 0; x < TAM; x++)
    {
        cout << "============";
        for (int y = 0; y < strlen(palavrita[x].palavra); y++)
        {
            palavrita[x].palavra[0] = toupper(palavrita[x].palavra[0]);
            cout << "\n"
                 << palavrita[x].palavra[y];
            cout << "\n\n";
        }
    }
    cout << "============";

    cout << "\n\n";
    system("pause");
    return 0;
}