#include "aluno.h"

Aluno::Aluno():
Pessoa()
{
	univ = NULL;
}

Aluno::Aluno(string name, int d, int m, int y, int r, int c, Universidade* u):
Pessoa(name, d, m, y)
{
	RA = r;
	CR = c;
	univ = u;
}

Aluno::~Aluno()
{
}

void Aluno::setRA(int r)
{
	RA = r;
}

void Aluno::setCR(int c)
{
	CR = c;
}

void Aluno::setUni(Universidade* u)
{
	univ = u;
}