#include "elDepartamento.h"

#include "elDisciplina.h"

ElDepartamento::ElDepartamento()
{
	prev = NULL;
	next = NULL;
	dept = NULL;
}

ElDepartamento::~ElDepartamento()
{
	prev = NULL;
	next = NULL;
	dept = NULL;
}

void ElDepartamento::setPrev(ElDepartamento* ed)
{
	prev = ed;
}

void ElDepartamento::setNext(ElDepartamento* ed)
{
	next = ed;
}

void ElDepartamento::setDept(Departamento* d)
{
	dept = d;
}

ElDepartamento* ElDepartamento::getPrev()
{
	return prev;
}

ElDepartamento* ElDepartamento::getNext()
{
	return next;
}

Departamento* ElDepartamento::getDept()
{
	return dept;
}