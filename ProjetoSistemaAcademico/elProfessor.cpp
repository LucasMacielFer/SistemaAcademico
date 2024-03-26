#include "elProfessor.h"

ElProfessor::ElProfessor() :
	prev(NULL),
	next(NULL),
	pProf(NULL)
{
}

ElProfessor::~ElProfessor()
{
	prev = NULL;
	next = NULL;
	pProf = NULL;
}

void ElProfessor::setPrev(ElProfessor* ed)
{
	prev = ed;
}

void ElProfessor::setNext(ElProfessor* ed)
{
	next = ed;
}

void ElProfessor::setProf(Professor* pp)
{
	pProf = pp;
}

ElProfessor* ElProfessor::getPrev()
{
	return prev;
}

ElProfessor* ElProfessor::getNext()
{
	return next;
}

Professor* ElProfessor::getProf()
{
	return pProf;
}