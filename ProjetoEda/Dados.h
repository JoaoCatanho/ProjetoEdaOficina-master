#pragma once
#include <iostream>
#include <string>
#include <fstream>

//Tab separada para os ficheiros txt

using namespace std;

//Valor m�ximo de marcas e modelos 
const int NumMax_Marcas = 1000;
const int NumMax_Modelos = 1000;

//Vai guardar as marcas e modelos em arrays de strings
std::string marcas[NumMax_Marcas];
std::string modelos[NumMax_Modelos];

//contagem da quantidade de marcas e modelos que est�o nos ficheiros
int n_marcas = 0;
int n_modelos = 0;




void Abre_ficheirosMM();
std::string Valor_aleatorio_array(std::string array[], int tamanho_array);
int aleatorio(int min, int max);