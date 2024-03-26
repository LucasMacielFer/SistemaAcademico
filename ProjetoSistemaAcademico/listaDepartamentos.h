#pragma once
#include "stdafx.h"
#include "elDepartamento.h"

class ListaDepartamentos
{
private:
	ElDepartamento* pDeptAtual;
	ElDepartamento* pDeptPrimeiro;
	int numeroDeptos;

public:
	ListaDepartamentos();
	~ListaDepartamentos();
	int getNumeroDeptos();
	void incluiDept(Departamento* d);
	void listarDeptos();
};