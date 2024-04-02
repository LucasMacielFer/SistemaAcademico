#pragma once
#include "stdafx.h"
#include "pessoa.h"

class Departamento;
class Universidade;

class Professor : public Pessoa
{
private:
	string cargo;
	Departamento* deptFiliado;
	Universidade* univFiliado;

public:
	Professor();
	Professor(int i, string name, int d, int m, int y);
	Professor(int i, string name, int d, int m, int y, string c, Departamento* dep, Universidade* u);
	~Professor();
	void setCargo(string c);
	void setDepto(Departamento* d);
	void setUni(Universidade* u);
	void ondeTrabalha();
};