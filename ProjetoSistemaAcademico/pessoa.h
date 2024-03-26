#pragma once
#include "stdafx.h"

class Universidade;

class Pessoa
{
protected:
    string nome;
    int idade;
    int dia;
    int mes;
    int ano;

public:
    // Construtora sem parametros ou equivalente!
    Pessoa(string name, int d, int m, int y);
    Pessoa();
    ~Pessoa();
    void calculaIdade(int d, int m, int y);
    string getNome();
    int getIdade();
};
