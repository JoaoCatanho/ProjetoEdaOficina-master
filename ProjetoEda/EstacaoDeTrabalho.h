#pragma once

#include <iostream>
#include "Carro.h"
#include "mecanico.h"


struct EstacaoDeTrabalho
{
	int capacidade;
	int n_carros_arranjar; //numero carros na ET
	int n_carros_arranjados; //numero carros ja reparados pela ET
	Mecanico mecanico; 
	Carro* carros_a_arranjar; //lista para por os carros que estao na ET
	Carro* carros_arranjados;//lista para por os carros reparados
	float TotalFaturacao;
};


EstacaoDeTrabalho gera_et(); // funçao para gerar uma et

bool carro_pode_entrar_et(EstacaoDeTrabalho et,Carro carro);  // verificar se carro pode entrar na et