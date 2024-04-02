#pragma once
#include "stdafx.h"
#include "listaDisciplinas.h"
#include "listaProfessores.h"
#include "identificador.h"

class Universidade;

class Departamento: public Identificador
{
private:
	string nome;
	Universidade* uni;
	ListaDisciplinas* pListaDisc;
	ListaProfessores* pListaProfs;
	
public: 
	Departamento();
	Departamento(int i, string n);
	Departamento(int i);
	~Departamento();
	void setNome(string n);
	void setUniv(Universidade* u);
	string getNome();
	void incluiDisc(Disciplina* disc);
	void incluiProf(Professor* prof);
	void imprimeDisc();
	void imprimeProfs();
};