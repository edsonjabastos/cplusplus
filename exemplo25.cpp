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
    } atletas[10] = {{"Jairzinho", "VolleyBall", "Base", "98765-9876", 410.2, 1999}, {"Juninnho", "Rugby", "Senior", "98765-1234", 5000, 1994}, {"Tinoco", "Natacao", "Pleno", "98765-4567", 100, 1989}, {"Tunico", "Tenis", "Base", "98765-4321", 500, 1970}, {"Samuelzinho", "PingPong", "Beck", "98765-2589", 400, 1994}, {"Torinha", "Torador", "mlk correria", "90070-2589", 4000, 2001}};
    // atletas[0] = {"Jairzinho", "VolleyBall", "Base", "98765-9876", 410.2, 1999};
    // atletas[0].nomeAtl.set("Jairzinho");
    // atletas[1] = {"Juninnho", "Rugby", "Senior", "98765-1234", 5000, 1994};
    // atletas[2] = {"Tinoco", "Natacao", "Pleno", "98765-4567", 100, 1989};
    // atletas[3] = {"Tunico", "Tenis", "Base", "98765-4321", 500, 1970};
    // atletas[4] = {"Samuelzinho", "PingPong", "Beck", "98765-2589", 400, 1994};
    strcpy(atletas[6].nomeAtl, "Ze Bunitinho");
    strcpy(atletas[6].esporte, "Corredor");
    strcpy(atletas[6].categoria, "Da Hora");
    strcpy(atletas[6].telefone, "@@@@@-@@@@");
    atletas[5].anoNasc = 1900;
    atletas[5].ajudaDeCusto = 2;
    // atletas[6] = (Atleta){"Gaspar", "Sumo", "22 NATO", "90000-2589", 3000, 1996};
    system("cls");

    Atleta atletaDiferente[1] = {{"Gaspar", "Sumo", "22 NATO", "90000-2589", 3000, 1996}};

    for (int x = 0; x <= 7; x++)
    {
        cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n";
        cout << "\t> Nome do Atleta: " << atletas[x].nomeAtl;
        cout << "\n---------------------------------------------------------\n";
        cout << "> Esporte: " << atletas[x].esporte << "\t > Categoria: " << atletas[x].categoria;
        cout << "\n> Ano de nascimento: " << atletas[x].anoNasc << "\t > Ajuda de custo: R$" << atletas[x].ajudaDeCusto;
        cout << "\n> Telefone: " << atletas[x].telefone;
        cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n\n";
    }
    cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n";
    cout << "\t> Nome do Atleta: " << atletaDiferente[0].nomeAtl;
    cout << "\n---------------------------------------------------------\n";
    cout << "> Esporte: " << atletaDiferente[0].esporte << "\t > Categoria: " << atletaDiferente[0].categoria;
    cout << "\n> Ano de nascimento: " << atletaDiferente[0].anoNasc << "\t > Ajuda de custo: R$" << atletaDiferente[0].ajudaDeCusto;
    cout << "\n> Telefone: " << atletaDiferente[0].telefone;
    cout << "\n<$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n\n";

    system("pause");
    return 0;
}