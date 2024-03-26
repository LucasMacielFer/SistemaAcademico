#include "disciplina.h"
#include "departamento.h"

Disciplina::Disciplina(int i, string n, string ac)
{
	id = i;
	nome = n;
	areaConhecimento = ac;
	pDep = NULL;
	pLista = new ListaAlunos();
}

Disciplina::Disciplina()
{
	id = -1;
	pDep = NULL;
	pLista = new ListaAlunos();
}

Disciplina::~Disciplina()
{
	delete pLista;
}

void Disciplina::incluiAluno(Aluno* pa)
{
	pLista->incluiAluno(pa);
}

string Disciplina::getNome()
{
	return nome;
}

void Disciplina::setNome(string n)
{
	nome = n;
}

int Disciplina::getID()
{
	return id;
}

void Disciplina::setID(int i)
{
	id = i;
}

Departamento* Disciplina::getDepartamento()
{
	return pDep;
}

void Disciplina::setDepartamento(Departamento* depto)
{
	pDep = depto;
}