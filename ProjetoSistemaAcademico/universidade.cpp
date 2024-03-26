#include "universidade.h"

Universidade::Universidade():
Identificador(),
nome(""),
pLista(NULL)
{
	pLista = new ListaDepartamentos();
}

Universidade::Universidade(int i, string n):
Identificador(i),
nome(n),
pLista(NULL)
{
	pLista = new ListaDepartamentos();
}

Universidade::Universidade(int i):
Identificador(i),
nome(""),
pLista(NULL)
{
	pLista = new ListaDepartamentos();
}

Universidade::~Universidade()
{
	delete pLista;
}

string Universidade::getNome()
{
	return nome;
}

void Universidade::setNome(string n)
{
	nome = n; 
}

void Universidade::incluiDept(Departamento* d)
{
	pLista->incluiDept(d);
	d->setUniv(this);
}

void Universidade::imprimeDeptos()
{
	pLista->listarDeptos();
}