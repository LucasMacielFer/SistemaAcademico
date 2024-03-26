#include "professor.h"

Professor::Professor():
Pessoa()
{
	deptFiliado = NULL;
	univFiliado = NULL;
}

Professor::Professor(string name, int d, int m, int y):
Pessoa(name, d, m, y)
{
	deptFiliado = NULL;
	univFiliado = NULL;
}

Professor::Professor(string name, int d, int m, int y, string c, Departamento* dep, Universidade* u):
Pessoa(name, d, m, y)
{
	cargo = c;
	deptFiliado = dep;
	univFiliado = u;
}

Professor::~Professor()
{
}

void Professor::setCargo(string c)
{
	cargo = c;
}

void Professor::setDepto(Departamento* d)
{
	deptFiliado = d;
}

void Professor::setUni(Universidade* u)
{
	univFiliado = u;
}

void Professor::ondeTrabalha()
{
	if (univFiliado != NULL)
	{
		cout << nome << " eh professor " << cargo << " em " << univFiliado->getNome() << endl;
	}
}