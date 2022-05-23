// MINUTO 27:22
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Coordenada
{
     int y, x, z;
};

void printData(Coordenada ponto);

void asteriscos();

int main()
{
     setlocale(LC_ALL, "Portuguese");

     // int x, y, z;
     // string nome, endereco;
     // int anoNasc;
     // x = 10;
     // y = 20;
     // z = 30;

     // Coordenada pontoA;
     // pontoA.x = 10;
     // pontoA.y = 20;
     // pontoA.z = 30;
     // Coordenada pontoB;
     // pontoB.x = 11;
     // pontoB.y = 22;
     // pontoB.z = 33;
     // Coordenada pontoC;
     // pontoC.x = 111;
     // pontoC.y = 222;
     // pontoC.z = 333;

     // Coordenada ponto[3];

     // ponto[0].x = 10;
     // ponto[0].y = 20;
     // ponto[0].z = 30;

     // ponto[1].x = 11;
     // ponto[1].y = 21;
     // ponto[1].z = 31;

     // ponto[2].x = 12;
     // ponto[2].y = 22;
     // ponto[2].z = 32;

     Coordenada point1;
     // point1.x = 10;
     // point1.y = 20;
     // point1.z = 30;
     Coordenada point2;
     Coordenada point3;

     cout << "\nDigite a coordenada point1.X ===> ";
     cin >> point1.x;
     // cout << "\nValor da coordenada point1.X ===> " << point1.x << endl;
     cout << "\nDigite a coordenada point1.Y ===> ";
     cin >> point1.y;
     // cout << "\nValor da coordenada point1.Y ===> " << point1.y << endl;
     cout << "\nDigite a coordenada point1.Z ===> ";
     cin >> point1.z;
     cout << endl;
     // cout << "\nValor da coordenada point1.Z ===> " << point1.z << endl
     // << endl;
     asteriscos();

     printData(point1);

     // cout << "Coordenada X: " << x << endl;
     // cout << "Coordenada Y: " << y << endl;
     // cout << "Coordenada Z: " << z << endl;

     //     // AAA
     //     cout << "Coordenada A.X: " << pontoA.x << endl;
     //     cout << "Coordenada B.Y: " << pontoA.y << endl;
     //     cout << "Coordenada C.Z: " << pontoA.z << endl
     //          << endl;
     //     // BBB
     //     cout << "Coordenada B.X: " << pontoB.x << endl;
     //     cout << "Coordenada B.Y: " << pontoB.y << endl;
     //     cout << "Coordenada B.Z: " << pontoB.z << endl
     //          << endl;
     //     // CCC
     //     cout << "Coordenada C.X: " << pontoC.x << endl;
     //     cout << "Coordenada C.Y: " << pontoC.y << endl;
     //     cout << "Coordenada C.Z: " << pontoC.z << endl
     //          << endl;

     // // [0][0][0]
     // cout << "Coordenada X[0]: " << ponto[0].x << endl;
     // cout << "Coordenada Y[0]: " << ponto[0].y << endl;
     // cout << "Coordenada Z[0]: " << ponto[0].z << endl
     //      << endl;
     // // [1][1][1]
     // cout << "Coordenada X[1]: " << ponto[1].x << endl;
     // cout << "Coordenada X[1]: " << ponto[1].x << endl;
     // cout << "Coordenada Y[1]: " << ponto[1].y << endl
     //      << endl;
     // // [2][2][2]
     // cout << "Coordenada Y[2]: " << ponto[2].y << endl;
     // cout << "Coordenada Z[2]: " << ponto[2].z << endl;
     // cout << "Coordenada Z[2]: " << ponto[2].z << endl
     //      << endl;
     system("pause");
     return 0;
}

void printData(Coordenada ponto)
{
     cout << "\n\nValor da coordenada point1.X ===> " << ponto.x << endl;
     cout << "\nValor da coordenada point1.Y ===> " << ponto.y << endl;
     cout << "\nValor da coordenada point1.Z ===> " << ponto.z << endl
          << endl;
}

void asteriscos()
{
     for (int x = 1; x < 20; x++)
          cout << "*";
}
