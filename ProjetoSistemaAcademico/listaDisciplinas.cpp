#include "listaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas()
{
	pDiscAtual = NULL;
	pDiscPrimeiro = NULL;
	numeroDisc = 0;
}

ListaDisciplinas::~ListaDisciplinas()
{
	ElDisciplina* pAux;
	pAux = pDiscPrimeiro;
	while (pDiscAtual != NULL)
	{
		pDiscPrimeiro = pDiscPrimeiro->getNext();
		delete pAux;
		pAux = pDiscPrimeiro;
	}
}

int ListaDisciplinas::getNumeroDisc()
{
	return numeroDisc;
}

void ListaDisciplinas::incluiDisc(Disciplina* d)
{
	ElDisciplina* paux;
	paux = new ElDisciplina();
	paux->setDisc(d);

	if (pDiscPrimeiro == NULL)
	{
		pDiscPrimeiro = paux;
		pDiscAtual = paux;
	}
	else
	{
		pDiscAtual->setNext(paux);
		paux->setPrev(pDiscAtual);
		pDiscAtual = paux;
	}
	numeroDisc += 1;
}


void ListaDisciplinas::listarDisciplinas()
{
	ElDisciplina* paux;
	paux = pDiscPrimeiro;
	while (paux != NULL)
	{
		cout << paux->getDisc()->getNome() << endl;
	}
}