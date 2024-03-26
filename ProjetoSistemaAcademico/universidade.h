#pragma once
#include "stdafx.h"
#include "listaDepartamentos.h"

class Universidade
{
private:
	string nome;
	ListaDepartamentos* pLista;

public:
	Universidade();
	Universidade(string n);
	~Universidade();
	string getNome();
	void setNome(string n);
	void incluiDept(Departamento* d);
	void imprimeDeptos();
};
 