#include "elDisciplina.h"

ElDisciplina::ElDisciplina():
prev(NULL),
next(NULL),
disc(NULL)
{
}

ElDisciplina::~ElDisciplina()
{
	prev = NULL;
	next = NULL;
	disc = NULL;
}

void ElDisciplina::setPrev(ElDisciplina* ed)
{
	prev = ed;
}

void ElDisciplina::setNext(ElDisciplina* ed)
{
	next = ed;
}

void ElDisciplina::setDisc(Disciplina* d)
{
	disc = d;
}

ElDisciplina* ElDisciplina::getPrev()
{
	return prev;
}

ElDisciplina* ElDisciplina::getNext()
{
	return next;
}

Disciplina* ElDisciplina::getDisc()
{
	return disc;
}