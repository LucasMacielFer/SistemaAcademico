#pragma once
#include "stdafx.h"
#include "listaAlunos.h"
#include "identificador.h"

class Departamento;

class Disciplina: public Identificador
{
private:
	string nome;
	string areaConhecimento;
	ListaAlunos* pLista;
	Departamento* pDep;

public:
	Disciplina(int i, string n, string ac);
	Disciplina(int i);
	Disciplina();
	~Disciplina();
	void incluiAluno(Aluno* pa);
	string getNome();
	void setNome(string n);
	Departamento* getDepartamento();
	void setDepartamento(Departamento* depto);
};