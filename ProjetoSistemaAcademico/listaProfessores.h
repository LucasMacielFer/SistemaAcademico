#pragma once
#include "stdafx.h"
#include "elProfessor.h"

class ListaProfessores {
private:
	ElProfessor* pProfAtual;
	ElProfessor* pProfPrimeiro;
	int numeroProfs;

public:
	ListaProfessores();
	~ListaProfessores();
	int getNumeroProfs();
	void incluiProf(Professor* pp);
	void listarProfs();
};