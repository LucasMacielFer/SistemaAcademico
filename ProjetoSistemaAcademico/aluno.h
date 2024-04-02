#pragma once
#include "stdafx.h"
#include "pessoa.h"

class Universidade;

class Aluno : public Pessoa
{
private:
	int RA;
	int CR;
	Universidade* univ; 

public:
	Aluno();
	Aluno(int i, string name, int d, int m, int y, int r, int c, Universidade* u = NULL);
	Aluno(int i, string name, int d, int m, int y);
	~Aluno();
	void setRA(int r);
	void setCR(int c);
	void setUni(Universidade* u);
};