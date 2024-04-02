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
	string nome;
	Universidade* uni;
	cout << "Nome da universidade: " << endl;
	cin >> nome;
	uni = new Universidade(codigo, nome);
	codigo++;
	listaUniv->incluiUni(uni);
}

void Principal::cadastraDepartamento()
{
	string nomeUniv;
	string nomeDept;
	Universidade* univ;
	Departamento* depto;
	cout << "Em qual universidade deseja cadastrar o departamento?" << endl;
	listaUniv->listarUniversidades();
	
	cin >> nomeUniv;
	univ = listaUniv->encontraUni(nomeUniv);

	if (univ == NULL)
	{
		cout << "Univerisdade não encontrada!" << endl;
	}
	else
	{
		cout << "Nome do departamento: " << endl;
		cin >> nomeDept;
		depto = new Departamento(codigo, nomeDept);
		codigo++;
		univ->incluiDept(depto);
	}
}

void Principal::cadastraDisciplina()
{
	string nomeUniv, nomeDept, nomeDisc, acDisc;
	Universidade* univ;
	Departamento* depto;
	Disciplina* disc;
	cout << "Em qual universidade deseja cadastrar a disciplina?" << endl;
	listaUniv->listarUniversidades();

	cin >> nomeUniv;
	univ = listaUniv->encontraUni(nomeUniv);

	if (univ == NULL)
	{
		cout << "Univerisdade não encontrada!" << endl;
	}
	else
	{
		cout << "Em qual departamento deseja cadastrar a disciplina?" << endl;
		univ->imprimeDeptos();
		cin >> nomeDept;
		depto = univ->encontraDept(nomeDept);
		if (depto == NULL)
		{
			cout << "Departamento não encontrado!" << endl;
		}
		else
		{
			cout << "Nome da disciplina: " << endl;
			cin >> nomeDisc;
			cout << "Area de conhecimento: " << endl;
			cin >> acDisc;
			disc = new Disciplina(codigo, nomeDisc, acDisc);
			codigo++;
			depto->incluiDisc(disc);
		}
	}
}

void Principal::cadastraAluno()
{
	string nomeUniv, nomeAluno;
	int d, m, y;
	Universidade* univ;
	Aluno* al;

	cout << "Em qual universidade deseja cadastrar o aluno?" << endl;
	listaUniv->listarUniversidades();

	cin >> nomeUniv;
	univ = listaUniv->encontraUni(nomeUniv);

	if (univ == NULL)
	{
		cout << "Univerisdade não encontrada!" << endl;
	}
	else
	{
		cout << "Nome do aluno: " << endl;
		cin >> nomeAluno;
		cout << "Data de nascimento do aluno: " << endl;
		cin >> d >> m >> y;
		al = new Aluno(codigo, nomeAluno, d, m, y);
		codigo++;
		univ->incluiAluno(al);
	}
}

void Principal::cadastraProfessor()
{
	string nomeUniv, nomeDept, nomeProf;
	int d, m, y;
	Universidade* univ;
	Departamento* depto;
	Professor* prof;
	cout << "Em qual universidade deseja cadastrar o professor?" << endl;
	listaUniv->listarUniversidades();

	cin >> nomeUniv;
	univ = listaUniv->encontraUni(nomeUniv);

	if (univ == NULL)
	{
		cout << "Univerisdade não encontrada!" << endl;
	}
	else
	{
		cout << "Em qual departamento deseja cadastrar o professor?" << endl;
		univ->imprimeDeptos();
		cin >> nomeDept;
		depto = univ->encontraDept(nomeDept);
		if (depto == NULL)
		{
			cout << "Departamento não encontrado!" << endl;
		}
		else
		{
			cout << "Nome do professor: " << endl;
			cin >> nomeProf;
			cout << "Data de nascimento do professor: " << endl;
			cin >> d >> m >> y;
			prof = new Professor(codigo, nomeProf, d, m, y);
			codigo++;
			depto->incluiProf(prof);
		}
	}
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
	ElUniversidade* pAuxUni = NULL;
	ElDepartamento* pAuxDep = NULL;

	cout << "Universidades: " << endl;
	listaUniv->listarUniversidades();

	pAuxUni = listaUniv->getFirst();

	while (pAuxUni != NULL)
	{
		cout << endl;
		pAuxDep = pAuxUni->getUniv()->getFirstDept();

		while (pAuxDep != NULL)
		{
			cout << "Departamento: " << pAuxDep->getDept()->getNome() << endl;
			cout << "Disciplinas e professores: \n \n";
			cout << "Disciplnas: " << endl;
			pAuxDep->getDept()->imprimeDisc();
			cout << endl;
			cout << "Professores: " << endl;
			pAuxDep->getDept()->imprimeProfs();
			cout << "\n \n";
			pAuxDep = pAuxDep->getNext();
		}

		pAuxUni = pAuxUni->getNext();
	}
}