#pragma once
#include "stdafx.h"
#include "elDisciplina.h"

class ListaDisciplinas
{
private:
	ElDisciplina* pDiscAtual;
	ElDisciplina* pDiscPrimeiro;
	int numeroDisc;

public:
	ListaDisciplinas();
	~ListaDisciplinas();
	int getNumeroDisc();
	void incluiDisc(Disciplina* d);
	void listarDisciplinas();
};