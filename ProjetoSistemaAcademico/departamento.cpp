#include "universidade.h"
#include "departamento.h"

Departamento::Departamento():
Identificador(),
pListaDisc(NULL),
pListaProfs(NULL),
uni(NULL),
nome("")
{
	pListaDisc = new ListaDisciplinas();
	pListaProfs = new ListaProfessores();
}

Departamento::Departamento(int i, string n):
Identificador(i),
pListaDisc(NULL),
pListaProfs(NULL),
uni(NULL),
nome(n)
{
	pListaDisc = new ListaDisciplinas();
	pListaProfs = new ListaProfessores();
}

Departamento::Departamento(int i) :
Identificador(i),
pListaDisc(NULL),
pListaProfs(NULL),
uni(NULL),
nome("")
{
	pListaDisc = new ListaDisciplinas();
	pListaProfs = new ListaProfessores();
}

Departamento::~Departamento() 
{ 
	delete pListaDisc;
	delete pListaProfs;
}

void Departamento::setNome(string n)
{
	nome = n;
}

void Departamento::setUniv(Universidade* u)
{
	uni = u;
}

string Departamento::getNome()
{
	return nome;
}

void Departamento::incluiDisc(Disciplina* disc)
{
	pListaDisc->incluiDisc(disc);
	disc->setDepartamento(this);
}

void Departamento::incluiProf(Professor* prof)
{
	pListaProfs->incluiProf(prof);
	prof->setDepto(this);
	prof->setUni(uni);
}

void Departamento::imprimeDisc()
{
	pListaDisc->listarDisciplinas();
}

void Departamento::imprimeProfs()
{
	pListaProfs->listarProfs();
}