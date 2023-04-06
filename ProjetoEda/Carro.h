#pragma once
#include <iostream>
#include <string>
#include "Dados.h"

using namespace std;









struct Carro
{
    std::string marca;
    std::string modelo;
    int id;
    int tempoMaxRep;
    bool prioritario;
    int tempoRep; //n dias que o carro ta na et
};


//Criar um array de structs dos carros
Carro carros[1000];
int contagem_carro = 0;


void gera_id_carro_modelos();
void gera_num_random();
Carro gera_carro();
void adiciona_carro();  //funcao para adicionar carro a dyn array
void remove_carro();    //funcao para remover carro a dyn array
void transfere_carro(); //funcao para transferir carros entre dyn arrays