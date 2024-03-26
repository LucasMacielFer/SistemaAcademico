#pragma once
#include "stdafx.h"
#include "universidade.h"

class ElUniversidade
{
private:
	Universidade* pUniv;
	ElUniversidade* prev;
	ElUniversidade* next;
public:
	ElUniversidade();
	~ElUniversidade();
	void setPrev(ElUniversidade* ed);
	void setNext(ElUniversidade* ed);
	void setUniv(Universidade* u);
	ElUniversidade* getPrev();
	ElUniversidade* getNext();
	Universidade* getUniv();
};