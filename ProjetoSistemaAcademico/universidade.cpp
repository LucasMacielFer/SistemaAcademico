#include "universidade.h"

Universidade::Universidade(string n)
{
	pLista = new ListaDepartamentos();
	nome = n;
}

Universidade::Universidade()
{
	pLista = new ListaDepartamentos();
	nome = "";
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
}

void Universidade::imprimeDeptos()
{
	pLista->listarDeptos();
}