#include "professor.h"

Professor::Professor():
Pessoa(),
cargo(""),
deptFiliado(NULL),
univFiliado(NULL)
{
}

Professor::Professor(int i, string name, int d, int m, int y):
Pessoa(i, name, d, m, y),
cargo(""),
deptFiliado(NULL),
univFiliado(NULL)
{
}

Professor::Professor(int i, string name, int d, int m, int y, string c, Departamento* dep, Universidade* u):
Pessoa(i, name, d, m, y)
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