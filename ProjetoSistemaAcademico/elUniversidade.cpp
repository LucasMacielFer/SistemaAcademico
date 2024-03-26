#include "elUniversidade.h"

ElUniversidade::ElUniversidade():
prev(NULL),
next(NULL),
pUniv(NULL)
{
}

ElUniversidade::~ElUniversidade()
{
	prev = NULL;
	next = NULL;
	pUniv = NULL;
}

void ElUniversidade::setPrev(ElUniversidade* ed)
{
	prev = ed;
}

void ElUniversidade::setNext(ElUniversidade* ed)
{
	next = ed;
}

void ElUniversidade::setUniv(Universidade* u)
{
	pUniv = u;
}

ElUniversidade* ElUniversidade::getPrev()
{
	return prev;
}

ElUniversidade* ElUniversidade::getNext()
{
	return next;
}

Universidade* ElUniversidade::getUniv()
{
	return pUniv;
}