#include "aluno.h"
#include "universidade.h"

Aluno::Aluno():
Pessoa(),
RA(0),
CR(-1),
univ(NULL)
{
}

Aluno::Aluno(int i, string name, int d, int m, int y, int r, int c, Universidade* u):
Pessoa(i, name, d, m, y),
RA(r),
CR(c),
univ(u)
{
}

Aluno::Aluno(int i, string name, int d, int m, int y) :
Pessoa(i, name, d, m, y),
RA(0),
CR(-1),
univ(NULL)
{
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