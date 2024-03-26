#include "listaAlunos.h"

ListaAlunos::ListaAlunos():
pAlunoAtual(NULL),
pAlunoPrimeiro(NULL),
numeroAlunos(0)
{
}

ListaAlunos::~ListaAlunos()
{
	ElAluno* pAux;
	pAux = pAlunoPrimeiro;
	while (pAlunoPrimeiro != NULL)
	{
		pAlunoPrimeiro = pAlunoPrimeiro->getNext();
		delete pAux;
		pAux = pAlunoPrimeiro;
	}
}

int ListaAlunos::getNumeroAlunos()
{
	return numeroAlunos; 
}

void ListaAlunos::incluiAluno(Aluno* pa)
{
	ElAluno* paux;
	paux = new ElAluno();
	paux->setAluno(pa);

	if (pAlunoPrimeiro == NULL)
	{
		pAlunoPrimeiro = paux;
		pAlunoAtual = paux;
	}
	else
	{
		pAlunoAtual->setNext(paux);
		paux->setPrev(pAlunoAtual);
		pAlunoAtual = paux;
	}
	numeroAlunos += 1;
}

void ListaAlunos::listarAlunos()
{
	ElAluno* paux;
	paux = pAlunoPrimeiro;
	while (paux != NULL)
	{
		cout << paux->getAluno()->getNome() << endl;
	}
}