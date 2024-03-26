#pragma once
#include "stdafx.h"
#include "departamento.h"

class ElDepartamento
{
private:
	Departamento* dept;
	ElDepartamento* prev;
	ElDepartamento* next;
public:
	ElDepartamento();
	~ElDepartamento();
	void setPrev(ElDepartamento* ed);
	void setNext(ElDepartamento* ed);
	void setDept(Departamento* d);
	ElDepartamento* getPrev();
	ElDepartamento* getNext();
	Departamento* getDept();
};