#include "identificador.h"

Identificador::Identificador(int i)
{
	id = i;
}

Identificador::Identificador()
{
	id = -1;
}

Identificador::~Identificador()
{
}

int Identificador::getId()
{
	return id;
}