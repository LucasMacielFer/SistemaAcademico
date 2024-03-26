#include "elAluno.h"

ElAluno::ElAluno():
faltas(0),
nota(0),
parcial1(0),
parcial2(0),
pAluno(NULL),
prev(NULL),
next(NULL)
{
}

ElAluno::~ElAluno()
{
	prev = NULL;
	next = NULL;
	pAluno = NULL;
}

void ElAluno::setAluno(Aluno* pa)
{ 
	pAluno = pa;
}

void ElAluno::setPrev(ElAluno* pe)
{
	prev = pe;
}

void ElAluno::setNext(ElAluno* pe)
{
	next = pe;
}

ElAluno* ElAluno::getPrev()
{
	return prev;
}

ElAluno* ElAluno::getNext()
{
	return next;
}

Aluno* ElAluno::getAluno()
{
	return pAluno;
}

float ElAluno::getNota()
{
	return nota;
}

float ElAluno::getParcial1()
{
	return parcial1;
}

float ElAluno::getParcial2()
{
	return parcial2;
}

int ElAluno::getFaltas()
{
	return faltas;
}

void ElAluno::setNota(float f)
{
	nota = f;
}

void ElAluno::setParcial1(float f)
{
	parcial1 = f;
}

void ElAluno::setParcial2(float f)
{
	parcial2 = f;
}

void ElAluno::setFaltas(int n)
{
	faltas = n;
}