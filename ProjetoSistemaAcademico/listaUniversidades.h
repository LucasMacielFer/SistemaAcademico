#pragma once
#include "stdafx.h"
#include "elUniversidade.h"

class ListaUniversidades
{
private:
	ElUniversidade* pUniAtual;
	ElUniversidade* pUniPrimeiro;
	int numeroUniversidades;

public:
	ListaUniversidades();
	~ListaUniversidades();
	int getNumeroUniversidades();
	void incluiUni(Universidade* u);
	void listarUniversidades();
};