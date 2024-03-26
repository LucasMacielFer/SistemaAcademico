#pragma once
#include "stdafx.h"
#include "disciplina.h"

class ElDisciplina
{
private:
	ElDisciplina* prev;
	ElDisciplina* next;
	Disciplina* disc;
public:
	ElDisciplina();
	~ElDisciplina();
	void setPrev(ElDisciplina* ed);
	void setNext(ElDisciplina* ed);
	void setDisc(Disciplina* d);
	ElDisciplina* getPrev();
	ElDisciplina* getNext();
	Disciplina* getDisc();
};