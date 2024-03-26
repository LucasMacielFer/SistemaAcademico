#pragma once
#include "stdafx.h"
#include "aluno.h"

/* Classe de associação */
class ElAluno
{
private:
	Aluno* pAluno;
	float nota;
	float parcial1;
	float parcial2;
	int faltas;
	ElAluno* prev;
	ElAluno* next;

public:
	ElAluno();
	~ElAluno();
	void setAluno(Aluno* pa);
	void setPrev(ElAluno* pe);
	void setNext(ElAluno* pe);
	ElAluno* getPrev();
	ElAluno* getNext();
	Aluno* getAluno();
	float getNota();
	float getParcial1();
	float getParcial2();
	int getFaltas();
	void setNota(float f);
	void setParcial1(float f);
	void setParcial2(float f);
	void setFaltas(int n);
};