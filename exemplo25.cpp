#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct Atleta
    {
        char nomeAtl[30], esporte[20], categoria[20], telefone[20];
        float ajudaDeCusto;
        int anoNasc;
    } atletas[10] = {{"Jairzinho", "VolleyBall", "Base", "98765-9876", 410.2, 1999}, {"Juninnho", "Rugby", "Senior", "98765-1234", 5000, 1994}, {"Tinoco", "Natacao", "Pleno", "98765-4567", 100, 1989}, {"Tunico", "Tenis", "Base", "98765-4321", 500, 1970}, {"Samuelzinho", "PingPong", "Beck", "98765-2589", 400, 1994}};
    // atletas[0] = {"Jairzinho", "VolleyBall", "Base", "98765-9876", 410.2, 1999};
    // atletas[0].nomeAtl.set("Jairzinho");
    // atletas[1] = {"Juninnho", "Rugby", "Senior", "98765-1234", 5000, 1994};
    // atletas[2] = {"Tinoco", "Natacao", "Pleno", "98765-4567", 100, 1989};
    // atletas[3] = {"Tunico", "Tenis", "Base", "98765-4321", 500, 1970};
    // atletas[4] = {"Samuelzinho", "PingPong", "Beck", "98765-2589", 400, 1994};
    atletas[5];
    strcpy(atletas[5].nomeAtl, "Ze Bunitinho");
    strcpy(atletas[5].nomeAtl, "Corredor");
    strcpy(atletas[5].nomeAtl, "Da Hora");
    strcpy(atletas[5].nomeAtl, "@@@@@-@@@@");
    atletas[5].anoNasc = 1900;
    atletas[5].ajudaDeCusto = 2;
    system("cls");

    for (int x = 0; x < 5; x++)
    {
        cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n";
        cout << "\t> Nome do Atleta: " << atletas[x].nomeAtl;
        cout << "\n---------------------------------------------------------\n";
        cout << "> Esporte: " << atletas[x].esporte << "\t > Categoria: " << atletas[x].categoria;
        cout << "\n> Ano de nascimento: " << atletas[x].anoNasc << "\t > Ajuda de custo: R$" << atletas[x].ajudaDeCusto;
        cout << "\n> Telefone: " << atletas[x].telefone;
        cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n\n";
    }

    system("pause");
    return 0;
}