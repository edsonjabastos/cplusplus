#include <iostream>
#include <locale.h> //setlocale
#include <stdlib.h> // System
#include <string>   //Textos em geral

using namespace std;

// void imprimirMsg();
// float calculaImposto();
// float soma(float vlr1, float vlr2);
// float soma7(float vlr1);
void agoraeh100(float &vlr1);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // imprimirMsg();
    float total, total0, v1, v2, v3;
    v1 = 13.8;
    v2 = 5.7;
    // total = calculaImposto();
    // total = soma(24.4, 10.3);
    // total = soma(v1, v2);
    // total = soma7(v1);
    // total0 = soma7(v2);
    agoraeh100(total);
    agoraeh100(total0);
    agoraeh100(v1);
    agoraeh100(v2);
    agoraeh100(v3);
    cout << "Resultado do cálculo ->" << total << endl
         << total0 << endl
         << v1 << endl
         << v2 << endl
         << v3 << endl
         << endl;
    // cout << "Resultado do cálculo ->" << total0 << endl
    //  << endl;
    system("pause");
    return 0;
}

// void imprimirMsg()
// {
//     cout << "\nHello World.\n\n";
//     cout << "\nAlô Mundo.\n\n";
// }

// float calculaImposto()
// {
//     float sal, imp;
//     sal = 205;
//     imp = sal * 0.1;
//     return imp;
// }

// float soma(float vlr1, float vlr2)
// {
//     float total;
//     total = vlr1 + vlr2;
//     return total;
// }

// float soma7(float& vlr1)
// {
//     vlr1 += 7;
//     return vlr1;
// }

void agoraeh100(float &vlr1)
{
    vlr1 = 100;
}
