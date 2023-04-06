#include "EstacaoDeTrabalho.h"
#include <iostream>
#include <string>
using namespace std;

bool CarroArranjado() {
	int probabilidadede_Arranjado = rand() * 100 + 1;
	if (probabilidadede_Arranjado <= 15) { // gera uma probabilidade de 15% do carro ser arranjado
		return true;
	}
	else{
		return false;
	}
}
void retira_carro() {
	if (CarroArranjado()<=15) { //caso a probabilidade seja cumprida o carro é removido da et e o nome é adicionado ao registo de carros reparados da et a que pertençe
		
		cout << "O carro foi reparado.O carro pertence aos carros reparados da "<<"et" << endl; //depois falta criar a et para dar certo 
		
	}
	else {
		cout << "Carro nao arranjado." << endl;
	}
}



EstacaoDeTrabalho gera_et()
{
	EstacaoDeTrabalho et = EstacaoDeTrabalho();
	
	et.capacidade = aleatorio(2, 5);
	et.carros_a_arranjar = new Carro[0];
	et.n_carros_arranjar = 0;
	et.carros_arranjados = new Carro[0];
	et.n_carros_arranjados = 0;
	et.TotalFaturacao = 0;
	et.mecanico = gera_mecanico();

	 return et;
}





