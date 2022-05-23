#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char nomeProd1[21] = "Martelo", nomeProd2[21] = "Furadeira", aux[21];
    float valor1 = 35.90, valor2 = 256.75, vAux;
    if (strcmp(nomeProd1, nomeProd2) > 0)
    {
        strcpy(aux, nomeProd1);
        strcpy(nomeProd1, nomeProd2);
        strcpy(nomeProd2, aux);
    }

    cout << "\nNome do Produto 1: " << nomeProd1 << "\t" << valor1;
    cout << "\nNome do Produto 2: " << nomeProd2 << "\t" << valor2;
    cout << "\n\n";

    system("pause");
    return 0;
}