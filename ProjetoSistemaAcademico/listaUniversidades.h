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
	bool isEmpty();
	int getNumeroUniversidades();
	void incluiUni(Universidade* u);
	void listarUniversidades();
	Universidade* encontraUni(string n);
    ElUniversidade* getFirst();
};