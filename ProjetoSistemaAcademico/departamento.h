#pragma once
#include "stdafx.h"
#include "listaDisciplinas.h"

class Universidade;

class Departamento
{
private:
	int id;
	string nome;
	Universidade* uni;
	ListaDisciplinas* pLista;
	
public: 
	Departamento();
	Departamento(int i, string n);
	~Departamento();
	void setID(int i);
	void setNome(string n);
	void setUniv(Universidade* u);
	string getNome();
	void incluiDisc(Disciplina* disc);
};