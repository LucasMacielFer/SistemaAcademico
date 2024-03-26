#include "disciplina.h"
#include "departamento.h"

Disciplina::Disciplina(int i, string n, string ac):
Identificador(i),
nome(n),
areaConhecimento(ac),
pDep(NULL),
pLista(NULL)
{
	pLista = new ListaAlunos();
}

Disciplina::Disciplina(int i):
Identificador(i),
nome(""),
areaConhecimento(""),
pDep(NULL),
pLista(NULL)
{
	pLista = new ListaAlunos();
}

Disciplina::Disciplina() :
Identificador(),
nome(""),
areaConhecimento(""),
pDep(NULL),
pLista(NULL)
{
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

Departamento* Disciplina::getDepartamento()
{
	return pDep;
}

void Disciplina::setDepartamento(Departamento* depto)
{
	pDep = depto;
}