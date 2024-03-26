#pragma once
#include "professor.h"

class ElProfessor{
private:
	Professor* pProf;
	ElProfessor* prev;
	ElProfessor* next;

public:
	ElProfessor();
	~ElProfessor();
	void setProf(Professor* pp);
	void setPrev(ElProfessor* pe);
	void setNext(ElProfessor* pe);
	ElProfessor* getPrev();
	ElProfessor* getNext();
	Professor* getProf();
};