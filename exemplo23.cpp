#include <iostream>

using namespace std;

int main()
{
    // definindo estrutura
    struct cad
    {
        char nomePaciente[30], classificacao[10], telefone[10];
        float altura, peso, imc;
    };
    cad paciente1, paciente2; // declaração das variaveis
    // primeiro paciente
    cout << "\nNome do primeiro paciente: ";
    cin.getline(paciente1.nomePaciente, 30);
    cout << "\nDigite peso, altura e IMC, pressionando enter apos cada um\n";
    cin >> paciente1.peso >> paciente1.altura >> paciente1.imc;
    cin.get();
    cout << "\nDigite a classificacao: ";
    cin.getline(paciente1.classificacao, 10);
    cout << "\nDigite telefone: ";
    cin.getline(paciente1.telefone, 10);
    // segundo paciente
    cout << "\nNome do segundo paciente: ";
    cin.getline(paciente2.nomePaciente, 30);
    cout << "\nDigite peso, altura e IMC, pressionando enter apos cada um\n";
    cin >> paciente2.peso >> paciente2.altura >> paciente2.imc;
    cin.get(); // retira o enter deixado pela variavel numerica
    cout << "\nDigite a classificacao: ";
    cin.getline(paciente2.classificacao, 10);
    cout << "\nDigite telefone: ";
    cin.getline(paciente2.telefone, 10);

    system("cls"); // limpa tela
    cout << "\nNome do primeiro paciente: " << paciente1.nomePaciente;
    cout << "\nPeso\tAltura\tIMC\n";
    cout << "\n"
         << paciente1.peso << "\t" << paciente1.altura << "\t" << paciente1.imc << "\t" << paciente1.classificacao << "\n";
    cout << "\nTelefone do segundo paciente: " << paciente1.nomePaciente;

    cout << "\nNome do segundo paciente: " << paciente2.nomePaciente;
    cout << "\nPeso\tAltura\tIMC\n";
    cout << "\n"
         << paciente2.peso << "\t" << paciente2.altura << "\t" << paciente2.imc << "\t" << paciente2.classificacao << "\n";
    cout << "\bTelefone do segundo paciente: " << paciente2.telefone;

    system("pause");
    return 0;
}