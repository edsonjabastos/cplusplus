#include <iostream>

using namespace std;

int main()
{
    struct coordenadas
    {
        int x, y;
    };
    coordenadas a = {-5, 2}, b = {6, 5};
    cout << "\nCoordenadas de A => (" << a.x << ", " << a.y << ").";
    cout << "\nCoordenadas de B => (" << b.x << ", " << b.y << ").";
    cout << "\n\n";

    system("pause");
    return 0;
}