#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    struct Passageiro
    {
        char nomePassageiro[20], origem[20], destino[20], numPassagem[20], identidade[20], telefone[20];
    } paciente1 = {"Osvaldo", "Maceio", "Rio Grande N.", "No: 123EF", "MG-13.455.532", "989897676"},
      paciente2 = {"Leandro", "Belo Horizonte", "Rio Grande S.", "No: 321EF", "MG-23.455.532", "989890909"},
      paciente3 = {"Thiago", "Sergipe", "Rio de Janeiro", "No: 456EF", "MG-33.455.532", "912127676"},
      paciente4 = {"Daiane", "Teresina", "Bahia", "No: 654EF", "MG-43.455.532", "953537676"},
      paciente5 = {"Eunice", "Mantenopolis", "Trancoso", "No: 888EF", "MG-53.455.532", "989892323"};

    cout << "\n@@@@@@@@@@@@@@@>  Paciente 1: " << paciente1.nomePassageiro << "  <@@@@@@@@@@@@@@@@@@@@@@@\n@@>  Origem> " << paciente1.origem << "  <@@@@@@@@>  Destino> " << paciente1.destino << "  <@@@@@@\n@> No.Passagem> " << paciente1.numPassagem << "  <@@@@@>  Identidade> " << paciente1.identidade << "  <@@@@@>  Telefone> " << paciente1.telefone << "\n\n";
    cout << "\n@@@@@@@@@@@@@@@>  Paciente 2: " << paciente2.nomePassageiro << "  <@@@@@@@@@@@@@@@@@@@@@@@\n@@>  Origem> " << paciente2.origem << "  <@@@@@@@@>  Destino> " << paciente2.destino << "  <@@@@@@\n@> No.Passagem> " << paciente2.numPassagem << "  <@@@@@>  Identidade> " << paciente2.identidade << "  <@@@@@>  Telefone> " << paciente2.telefone << "\n\n";
    cout << "\n@@@@@@@@@@@@@@@>  Paciente 3: " << paciente3.nomePassageiro << "  <@@@@@@@@@@@@@@@@@@@@@@@\n@@>  Origem> " << paciente3.origem << "  <@@@@@@@@>  Destino> " << paciente3.destino << "  <@@@@@@\n@> No.Passagem> " << paciente3.numPassagem << "  <@@@@@>  Identidade> " << paciente3.identidade << "  <@@@@@>  Telefone> " << paciente3.telefone << "\n\n";
    cout << "\n@@@@@@@@@@@@@@@>  Paciente 4: " << paciente4.nomePassageiro << "  <@@@@@@@@@@@@@@@@@@@@@@@\n@@>  Origem> " << paciente4.origem << "  <@@@@@@@@>  Destino> " << paciente4.destino << "  <@@@@@@\n@> No.Passagem> " << paciente4.numPassagem << "  <@@@@@>  Identidade> " << paciente4.identidade << "  <@@@@@>  Telefone> " << paciente4.telefone << "\n\n";
    cout << "\n@@@@@@@@@@@@@@@>  Paciente 5: " << paciente5.nomePassageiro << "  <@@@@@@@@@@@@@@@@@@@@@@@\n@@>  Origem> " << paciente5.origem << "  <@@@@@@@@>  Destino> " << paciente5.destino << "  <@@@@@@\n@> No.Passagem> " << paciente5.numPassagem << "  <@@@@@>  Identidade> " << paciente5.identidade << "  <@@@@@>  Telefone> " << paciente5.telefone << "\n\n";

    system("pause");
    return 0;
}