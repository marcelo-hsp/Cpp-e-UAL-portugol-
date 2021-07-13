/*  employee.cpp
*
*	(Classe Emplyee) Crie uma classe chamada Employee que inclua três partes
*	de informação como membro de dados - um nome (tipo string), um sobrenome (tipo string) e um
*	salário mensal (tipo int). Sua classe deve conter um construtor que inicialize os três 
*	membros de dados. Forneça uma função set e uma função get para cada membro de dados.
*	Se o salário mensal não for positivo, configure-o como 0. Esreva um programa de teste
*	que demonstre as capacidades da classe. Crie dois objetos Employee e exiba o salário
*	anual de cada objeto. Então de a cada Employee um aumento de 10% e exiba novamente
*	o salario anual de cada Employee
*
*	Marcelo Henrique de Sousa Pinheiro
*/

#include <iostream>
#include <string>
#include "employee.h"

int main()
{
	string nomeFun, sobrenomeFun;
	int salarioFun;
	
	cout << "Digite o nome do funcionário: ";
	getline(cin, nomeFun);
	cout << "Digite o sobrenome do funcionário: ";
	getline(cin, sobrenomeFun);
	cout << "Digite o salário do funcionário: ";
	cin >> salarioFun;
	
	Employee funcionario(nomeFun, sobrenomeFun, salarioFun);
	funcionario.displayInformations();
	funcionario.salaryIncrease();
	return 0;
}
