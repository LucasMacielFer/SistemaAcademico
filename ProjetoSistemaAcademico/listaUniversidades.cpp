#include "listaUniversidades.h"

ListaUniversidades::ListaUniversidades():
pUniAtual(NULL),
pUniPrimeiro(NULL),
numeroUniversidades(0)
{
}

ListaUniversidades::~ListaUniversidades()
{
	ElUniversidade* pAux;
	pAux = pUniPrimeiro;
	while (pUniAtual != NULL)
	{
		pUniPrimeiro = pUniPrimeiro->getNext();
		delete pAux;
		pAux = pUniPrimeiro;
	}
}

bool ListaUniversidades::isEmpty()
{
	return pUniPrimeiro == NULL ? true : false;
}

int ListaUniversidades::getNumeroUniversidades()
{
	return numeroUniversidades;
}

void ListaUniversidades::incluiUni(Universidade* u)
{
	ElUniversidade* paux;
	paux = new ElUniversidade();
	paux->setUniv(u);

	if (pUniPrimeiro == NULL)
	{
		pUniPrimeiro = paux;
		pUniAtual = paux;
	}
	else
	{
		pUniAtual->setNext(paux);
		paux->setPrev(pUniAtual);
		pUniAtual = paux;
	}
	numeroUniversidades += 1;
}


void ListaUniversidades::listarUniversidades()
{
	ElUniversidade* paux;
	paux = pUniPrimeiro;
	while (paux != NULL)
	{
		cout << paux->getUniv()->getNome() << endl;
	}
}

Universidade* ListaUniversidades::encontraUni(string n)
{
	bool achou = false;
	ElUniversidade* pAux;
	Universidade* univ = NULL;
	pAux = pUniPrimeiro;
	
	while ((pAux != NULL) && (!achou))
	{
		if (pAux->getUniv()->getNome() == n)
		{
			univ = pAux->getUniv();
			achou = true;
		}
		pAux = pAux->getNext();
	}

	return univ;
}

ElUniversidade* ListaUniversidades::getFirst()
{
	return pUniPrimeiro;
}