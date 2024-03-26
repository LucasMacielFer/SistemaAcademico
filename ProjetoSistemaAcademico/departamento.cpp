#include "universidade.h"
#include "departamento.h"

Departamento::Departamento()
{
	pLista = new ListaDisciplinas();
	id = -1;
	uni = NULL;
}

Departamento::Departamento(int i, string n)
{
	pLista = new ListaDisciplinas();
	id = i;
	nome = n;
	uni = NULL;
}

Departamento::~Departamento() 
{ 
	delete pLista;
}

void Departamento::setID(int i)
{
	id = i;
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
	pLista->incluiDisc(disc);
}