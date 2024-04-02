#pragma once
#include "listaUniversidades.h"
#include "stdafx.h"

class Principal
{
private:
	ListaUniversidades* listaUniv;
	bool salvo;
	int codigo;

public:
	Principal();
	~Principal();
	void menuInicial();
	void cadastraObjeto();
	void gravaObjetos();
	void cadastraUniversidade();
	void cadastraDepartamento();
	void cadastraDisciplina();
	void cadastraAluno();
	void cadastraProfessor();
	void sair();
	void executar();
};
 