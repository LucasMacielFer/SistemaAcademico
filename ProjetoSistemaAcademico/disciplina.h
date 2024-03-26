#pragma once
#include "stdafx.h"
#include "listaAlunos.h"

class Departamento;

class Disciplina
{
private:
	int id;
	string nome;
	string areaConhecimento;
	ListaAlunos* pLista;
	Departamento* pDep;

public:
	Disciplina(int i, string n, string ac);
	Disciplina();
	~Disciplina();
	void incluiAluno(Aluno* pa);
	string getNome();
	void setNome(string n);
	int getID();
	void setID(int i);
	Departamento* getDepartamento();
	void setDepartamento(Departamento* depto);
};