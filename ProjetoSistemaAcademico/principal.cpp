#include "principal.h"

Principal::Principal() :
codigo(1),
salvo(false),
listaUniv(NULL)
{
	listaUniv = new ListaUniversidades();
}

Principal::~Principal()
{
	delete listaUniv;
}

void Principal::menuInicial()
{
	int op = -1;
	while (op != 4)
	{
		cout << "======= Sistema academico =======" << endl;
		cout << "Escolha uma opcao para continuar:" << endl << endl;
		cout << "[1] Cadastrar objeto" << endl;
		cout << "[2] Executar" << endl;
		cout << "[3] Gravar alteracoes" << endl;
		cout << "[4] Sair" << endl;
		cin >> op;
		cout << endl;

		switch (op)
		{
		case(1): { cadastraObjeto(); }
			break;
		case(2): { executar(); }
			break;
		case(3): { gravaObjetos(); }
			break;
		case(4): { sair(); }
			break;
		default: { cout << "Digite uma opcao valida!" << endl << endl;
			       getchar(); }
		}
	}
}

void Principal::cadastraObjeto()
{
	int op = -1;
	while (op != 6)
	{
		cout << "== Cadastro de objeto ==" << endl;
		cout << "O que deseja cadastrar?:" << endl << endl;
		cout << "[1] Cadastrar universidade" << endl;
		cout << "[2] Cadastrar departamento" << endl;
		cout << "[3] Cadastrar disciplina" << endl;
		cout << "[4] Cadastrar aluno" << endl;
		cout << "[5] Cadastrar professor" << endl;
		cout << "[6] Sair" << endl;
		cin >> op;
		cout << endl;

		switch (op)
		{
		case(1): { cadastraUniversidade(); }
			   break;
		case(2): { cadastraDepartamento(); }
			   break;
		case(3): { cadastraDisciplina(); }
			   break;
		case(4): { cadastraAluno(); }
			   break;
		case(5): { cadastraProfessor(); }
			   break;
		case(6): { salvo = false; }
			   break;
		default: {
			cout << "Digite uma opcao valida!" << endl << endl;
			getchar(); }
		}
	}
}

void Principal::gravaObjetos()
{
	salvo = true;
}

void Principal::cadastraUniversidade()
{
}

void Principal::cadastraDepartamento()
{
}

void Principal::cadastraDisciplina()
{
}

void Principal::cadastraAluno()
{
}

void Principal::cadastraProfessor()
{
}

void Principal::sair()
{
	int op = 0;

	if(!salvo)
	{ 
		while(op != 1 && op != 2)
		cout << "Deseja sair sem salvar?" << endl;
		cout << "[1] Sim" << endl;
		cout << "[2] Nao" << endl;
		cin >> op;
	}

	if (op == 1)
	{
		gravaObjetos();
	}

	cout << "Encerrando o sistema academico..." << endl;
}

void Principal::executar()
{
}