#pragma once
#include <iostream>
#include <string>


using namespace std;

struct Carro
{
    std::string marca;
    std::string modelo;
    int id;
    int tempoMaxRep;
    bool prioritario;
};





void Abre_ficheirosMM();
std::string Valor_aleatorio_array(std::string array[], int tamanho_array);
void gera_carro();
void gera_id_carro_modelos();
void gera_num_random();
