#pragma once
#include "stdafx.h"
#include "pessoa.h"

class Aluno : public Pessoa
{
private:
	int RA;
	int CR;
	Universidade* univ; 

public:
	Aluno();
	Aluno(string name, int d, int m, int y, int r, int c, Universidade* u);
	~Aluno();
	void setRA(int r);
	void setCR(int c);
	void setUni(Universidade* u);
};