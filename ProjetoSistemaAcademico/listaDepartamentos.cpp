#include "listaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos():
pDeptAtual(NULL),
pDeptPrimeiro(NULL),
numeroDeptos(0)
{
}

ListaDepartamentos::~ListaDepartamentos()
{
	ElDepartamento* pAux;
	pAux = pDeptPrimeiro;
	while (pDeptAtual != NULL)
	{
		pDeptPrimeiro = pDeptPrimeiro->getNext();
		delete pAux;
		pAux = pDeptPrimeiro;
	}
}

int ListaDepartamentos::getNumeroDeptos() 
{
	return numeroDeptos;
}

void ListaDepartamentos::incluiDept(Departamento* d)
{
	ElDepartamento* paux;
	paux = new ElDepartamento();
	paux->setDept(d);

	if (pDeptPrimeiro == NULL)
	{
		pDeptPrimeiro = paux;
		pDeptAtual = paux;
	}
	else
	{
		pDeptAtual->setNext(paux);
		paux->setPrev(pDeptAtual);
		pDeptAtual = paux;
	}
	numeroDeptos += 1;
}


void ListaDepartamentos::listarDeptos()
{
	ElDepartamento* paux;
	paux = pDeptPrimeiro;
	while (paux != NULL)
	{
		cout << paux->getDept()->getNome() << endl;
	}
}