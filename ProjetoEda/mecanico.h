
#include <iostream>
#include <string>
#include "Dados.h"




using namespace std;



class string;


// struct do mecanico
struct Mecanico {
    std::string nome;
    float precoReparacao;
    std::string marcaEspecializada;
  
};

Mecanico gera_mecanico();   //fun�ao para gerar um mecanico
