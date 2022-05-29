#include <iostream>
#define TAM 2

using namespace std;

int main()
{
    struct data
    {
        int dia, mes, ano;
    };

    struct pgto
    {
        int cod;
        float valor;
        data venc;
    } boleto[TAM];

    int x;

    for (x = 0; x < TAM; x++)
    {
        cout << "\nDigite o codigo do boleto: ";
        cin >> boleto[x].cod;
        cout << "\nDigite o valor do boleto: ";
        cin >> boleto[x].valor;
        cout << "\nDigite o dia de vencimento do boleto: ";
        cin >> boleto[x].venc.dia;
        cout << "\nDigite o mes de vencimento do boleto: ";
        cin >> boleto[x].venc.mes;
        cout << "\nDigite o ano de vencimento do boleto: ";
        cin >> boleto[x].venc.ano;
    }
    system("cls");

    cout << "\nLista de Boletos\nCodigo\tValor\tData de Venc.";
    for (x = 0; x < TAM; x++)
    {
        cout << "\n"
             << boleto[x].cod << "\t" << boleto[x].valor << "\t" << boleto[x].venc.dia << "/" << boleto[x].venc.mes << "/" << boleto[x].venc.ano;
    }
    cout << "\n\n";

    system("pause");
    return 0;
}