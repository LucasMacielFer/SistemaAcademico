#include "principal.h"

Principal::Principal() :
	simao("Jean Marcelo Simao", 3, 10, 1976),
	fabro("Joao Alberto Fabro", 14, 7, 1970),
	carmen("Carmen Caroline Rasera", 24, 4, 1972),
	UTFPR("Universidade Tecnologica Federal do Parana"),
	DAELN(1, "Departamento Academico de Eletronica"),
	DAINF(2, "Departamento Academico de Informatica")
{
}

Principal::~Principal()
{
}

void Principal::executar()
{
	simao.setUni(&UTFPR);
	fabro.setUni(&UTFPR);
	carmen.setUni(&UTFPR);
	simao.setDepto(&DAINF);
	fabro.setDepto(&DAINF); 
	carmen.setDepto(&DAELN);
	simao.setCargo("Titular");
	fabro.setCargo("Titular");
	carmen.setCargo("Titular");
	UTFPR.incluiDept(&DAINF);
	UTFPR.incluiDept(&DAELN);
	UTFPR.imprimeDeptos();
	simao.ondeTrabalha();
	fabro.ondeTrabalha();
	carmen.ondeTrabalha();
}