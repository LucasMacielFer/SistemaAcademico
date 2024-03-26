#include "pessoa.h"
#include "universidade.h"

Pessoa::Pessoa(string n, int d, int m, int y)
{
    nome = n;
    dia = d;
    mes = m;
    ano = y;
    idade = 0;
}

Pessoa::Pessoa()
{
    nome = "";
    dia = 0;
    mes = 0;
    ano = 0;
    idade = -1;
}

Pessoa::~Pessoa()
{
}

void Pessoa::calculaIdade(int d, int m, int y)
{
    int i = y - ano;

    if (m < mes || (m == mes && d < dia))
    {
        i--;
    }

    idade = i;
}

int Pessoa::getIdade()
{
    return idade;
}

string Pessoa::getNome()
{
    return nome;
}