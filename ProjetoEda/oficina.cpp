#include "oficina.h"

using namespace std;

void InicializarOficina(Oficina& oficina) // funçao para a primeira inicializaçao da oficina
{
    
}

void AbrirOficina(Oficina& oficina)
{
    char opcao;
    bool sair = false;
    do {
        cout << "\nEscolha uma opcao:\n";
        cout << "s - Ciclo Seguinte" << endl;
        cout << "g- Abrir  menu" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;
        cout << endl;
        switch (opcao) {
        case 's':
            Seguinte(oficina);
            break;
        case 'g':
            
            break;
        case '0':
            sair = true;
            break;
        default:
            cout << "Escolha uma opcao valida." << endl;
        }
    } while (!sair);
}

void Seguinte(Oficina& oficina) //funçao para passar para o ciclo seguinte
{
	oficina.ciclo++;
}

void adiciona_carros_fila( Oficina& oficina,int n_carros_gerados)
{
    
    // Gerar 10 carros
    for (int i = 0; i < n_carros_gerados; i++)
    {
 

        // Adicionar o carro ao array de carros
        carros[contagem_carro] = gera_carro();
        contagem_carro++;
    }
}