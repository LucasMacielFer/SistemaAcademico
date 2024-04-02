#include "universidade.h"

Universidade::Universidade() :
Identificador(),
nome(""),
pLista(NULL),
pListaAl(NULL)
{
	pLista = new ListaDepartamentos();
	pListaAl = new ListaAlunos();
}

Universidade::Universidade(int i, string n):
Identificador(i),
nome(n),
pLista(NULL),
pListaAl(NULL)
{
	pLista = new ListaDepartamentos();
	pListaAl = new ListaAlunos();
}

Universidade::Universidade(int i):
Identificador(i),
nome(""),
pLista(NULL),
pListaAl(NULL)
{
	pLista = new ListaDepartamentos();
	pListaAl = new ListaAlunos();
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

void Universidade::incluiAluno(Aluno* a)
{
	ElAluno* elemento;
	elemento = new ElAluno;
}

Departamento* Universidade::encontraDept(string n)
{
	bool achou = false;
	ElDepartamento* pAux;
	Departamento* depto = NULL;
	pAux = pLista->getFirst();

	while ((pAux != NULL) && (!achou))
	{
		if (pAux->getDept()->getNome() == n)
		{
			depto = pAux->getDept();
			achou = true;
		}

		pAux = pAux->getNext();
	}

	return depto;
}

ElDepartamento* Universidade::getFirstDept()
{
	return pLista->getFirst();
}