#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    struct Paciente
    {
        char nomePaciente[10], classificacao[10];
        float altura, peso, imc;
        double telefone;
    } paciente1 = {"Osvaldo", "gordo", 1.67, 78.5, 21.2, 999990000}, paciente2 = {"Ronaldo", "magrin", 1.89, 108.5, 25.5, 888880000};

    cout << "\nPaciente 1: " << paciente1.nomePaciente << "\t" << paciente1.classificacao << "\t" << paciente1.altura << "\t" << paciente1.peso << "\t" << paciente1.imc << "\t" << paciente1.telefone;
    cout << "\nPaciente 1: " << paciente2.nomePaciente << "\t" << paciente2.classificacao << "\t" << paciente2.altura << "\t" << paciente2.peso << "\t" << paciente2.imc << "\t" << paciente2.telefone;

    system("pause");
    return 0;
}