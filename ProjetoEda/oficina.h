#ifndef PROJETOEDAOFICINA_MASTER_2__H
#define PROJETOEDAOFICINA_MASTER_2__H

#include <iostream>
#include "Carro.h"
#include "mecanico.h"
#include "EstacaoDeTrabalho.h"
#include <string>

struct Oficina
{
	int tamanho = 0;
	Carro* fila_espera = new Carro[0];
	int tamanho_fila = 0;
	int ciclo = 0;
	EstacaoDeTrabalho *et = new EstacaoDeTrabalho[0];
};


void AbrirOficina(Oficina& oficina);

void Seguinte(Oficina& oficina);

void Gestao(Oficina& oficina);

void InicializarOficina(Oficina& oficina);

#endif


