#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Carro.h"


using namespace std;



/*Falta acrescentar :
int tempoMaxRep; fun��o rand() para gerar o tempo m�x de repara��o
bool prioritario;  fun��o ran() para decidir se � priorit�rio*/










void gera_num_random(Carro& carro) { /*referencia � struct carro de maneira a alterar o
    valor original e gera um valor aleat�rio entre 2 e 5*/
    carro.tempoMaxRep = (rand() % 4) + 2;
}


Carro gera_carro()
{
    // Selecionar aleatoriamente uma marca e um modelo dos arrays
    std::string marca = Valor_aleatorio_array(marcas, n_marcas);
    std::string modelo = Valor_aleatorio_array(modelos, n_modelos);

    // Criar um novo carro com a marca, modelo e id
    Carro novoCarro = { marca, modelo, contagem_carro + 1 };
    return novoCarro;
}

bool VerificaPrioritario() 
{
    int probabilidade = rand() % 100 + 1;
    //return probabilidade <= 5;
    if (probabilidade <= 5) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void gera_id_carro_modelos()
{
    for (int i = 0; i < contagem_carro; i++)
    {
        gera_num_random(carros[i]); // gera um valor aleat�rio para o tempoMaxRep
        carros[i].prioritario = VerificaPrioritario(); // d� um valor aleat�rio para prioritario na struct
        cout << "Carro " << carros[i].id << "\n";
        cout << "Marca: " << carros[i].marca << "\n";
        cout << "Modelo: " << carros[i].modelo << "\n";
        cout << "Tempo maximo de reparacao: " << carros[i].tempoMaxRep << "\n";
        cout << "Carro Prioritario: " << carros[i].prioritario << "\n\n";
    }
}




