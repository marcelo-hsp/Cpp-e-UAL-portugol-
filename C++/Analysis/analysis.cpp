// Analysis.cpp
/*		Marcelo Henrique de Sousa Pinheiro
*	Defini��o de fun��o-membro para a classe Analysis que
*	analisa os resultados do teste
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Inclus�o da classe Analysis a partir de analysis.h
#include "analysis.h"

//processa o resultado de teste de 10 alunos
void Analysis::processExamResults()
{
	// Inicializando as vari�veis nas declar��es
	int passes = 0; // n�mero de aprova��es
	int failures = 0; // n�mero de reprova��es
	int studantCounter = 1; // contador de alunos
	int result; // resultado de um teste (1 = aprovado, 2 = reprovado)
	
	// processa 10 alunos utilizando o loop controlado por contador
	while (studantCounter <= 10)
	{
		// solicita ao usu�rio uma entrada e obt�m valor fornecido pelo usu�rio
		cout << "Entre com o resultado (1 = aprovado | 2 = reprovado): ";
		cin >> result;
		
		if (result  == 1)
		{
			passes++;
		}
		else
		{
			failures++;
		}
		studantCounter++;
	}
	
	cout << "Aprovados: " << passes
		  << "\nReprovados: " << failures
 	  	  << endl;
   
	if (passes > 8)
	{
		cout << "Aumentar mensalidade" << endl;
	}
}
