#pragma once
#include "universidade.h"
#include "professor.h"
#include "stdafx.h"

class Principal
{
private:
	Professor simao;
	Professor fabro;
	Professor carmen;
	Universidade UTFPR;
	Departamento DAELN;
	Departamento DAINF;
public:
	Principal();
	~Principal();
	void executar();
};
 