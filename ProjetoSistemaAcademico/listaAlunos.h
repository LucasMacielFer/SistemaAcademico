#pragma once
#include "stdafx.h"
#include "elAluno.h"

class ListaAlunos
{
private:
	ElAluno* pAlunoAtual;
	ElAluno* pAlunoPrimeiro;
	int numeroAlunos;
public:
	ListaAlunos();
	~ListaAlunos();
	int getNumeroAlunos();
	void incluiAluno(Aluno* pa);
	void listarAlunos();
};