#pragma once
#include "stdafx.h"
#include "listaDepartamentos.h"
#include "identificador.h"

class Universidade: public Identificador
{
private:
	string nome;
	ListaDepartamentos* pLista;

public:
	Universidade();
	Universidade(int i);
	Universidade(int i, string n);
	~Universidade();
	string getNome();
	void setNome(string n);
	void incluiDept(Departamento* d);
	void imprimeDeptos();
};
 