#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    struct Passageiro
    {
        char nomePassageiro[20], origem[20], destino[20], numPassagem[20], identidade[20], telefone[20];
    } 
    paciente1 = {"Osvaldo", "Maceio", "Rio Grande N.", "No: 123EF", "MG-13.455.532", "989897676"},
    paciente2 = {"Leandro", "Belo Horizonte", "Rio Grande S.", "No: 321EF", "MG-23.455.532", "989890909"},
    paciente3 = {"Thiago", "Sergipe", "Rio de Janeiro", "No: 456EF", "MG-33.455.532", "912127676"},
    paciente4 = {"Daiane", "Teresina", "Bahia", "No: 654EF", "MG-43.455.532", "953537676"},
    paciente5 = {"Eunice", "Mantenopolis", "Trancoso", "No: 888EF", "MG-53.455.532", "989892323"};

    cout << "\nPaciente 1: " << paciente1.nomePassageiro << "\t" << paciente1.origem << "\t" << paciente1.destino << "\t" << paciente1.numPassagem << "\t" << paciente1.identidade << "\t" << paciente1.telefone;
    cout << "\nPaciente 2: " << paciente2.nomePassageiro << "\t" << paciente2.origem << "\t" << paciente2.destino << "\t" << paciente2.numPassagem << "\t" << paciente2.identidade << "\t" << paciente2.telefone;
    cout << "\nPaciente 3: " << paciente3.nomePassageiro << "\t" << paciente3.origem << "\t" << paciente3.destino << "\t" << paciente3.numPassagem << "\t" << paciente3.identidade << "\t" << paciente3.telefone;
    cout << "\nPaciente 4: " << paciente4.nomePassageiro << "\t" << paciente4.origem << "\t" << paciente4.destino << "\t" << paciente4.numPassagem << "\t" << paciente4.identidade << "\t" << paciente4.telefone;
    cout << "\nPaciente 5: " << paciente5.nomePassageiro << "\t" << paciente5.origem << "\t" << paciente5.destino << "\t" << paciente5.numPassagem << "\t" << paciente5.identidade << "\t" << paciente5.telefone << "\n\n";

    system("pause");
    return 0;
}