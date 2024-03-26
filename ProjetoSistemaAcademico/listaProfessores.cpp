#include "listaProfessores.h"

ListaProfessores::ListaProfessores() :
	pProfAtual(NULL),
	pProfPrimeiro(NULL),
	numeroProfs(0)
{
}

ListaProfessores::~ListaProfessores()
{
	ElProfessor* pAux;
	pAux = pProfPrimeiro;
	while (pProfPrimeiro != NULL)
	{
		pProfPrimeiro = pProfPrimeiro->getNext();
		delete pAux;
		pAux = pProfPrimeiro;
	}
}

int ListaProfessores::getNumeroProfs()
{
	return numeroProfs;
}

void ListaProfessores::incluiProf(Professor* pp)
{
	ElProfessor* paux;
	paux = new ElProfessor();
	paux->setProf(pp);

	if (pProfPrimeiro == NULL)
	{
		pProfPrimeiro = paux;
		pProfAtual = paux;
	}
	else
	{
		pProfAtual->setNext(paux);
		paux->setPrev(pProfAtual);
		pProfAtual = paux;
	}
	numeroProfs += 1;
}

void ListaProfessores::listarProfs()
{
	ElProfessor* paux;
	paux = pProfPrimeiro;
	while (paux != NULL)
	{
		cout << paux->getProf()->getNome() << endl;
	}
}