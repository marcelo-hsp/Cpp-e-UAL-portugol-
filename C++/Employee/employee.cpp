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

using namespace std;

Employee::Employee(string nomeEmployee, string sobrenomeEmployee, int salarioEmployee)
{
	setNome(nomeEmployee);
	setSobrenome(sobrenomeEmployee);
	setSalario(salarioEmployee);
}

void Employee::setNome(string nomeEmployee)
{
	nome = nomeEmployee;
}

void Employee::setSobrenome(string sobrenomeEmployee)
{
	sobrenome = sobrenomeEmployee;
}

void Employee::setSalario(int salarioEmployee)
{
	salario = salarioEmployee;
}

string Employee::getNome()
{
	return nome;
}

string Employee::getSobrenome()
{
	return sobrenome;
}

int Employee::getSalario()
{
	return salario;
}

void Employee::displayInformations()
{
	cout << "\nO nome do funcionario e: " << getNome();
	cout << "\nO sobrenome do funcionario e: " << getSobrenome();
	cout << "\nO salario do funcionario e: " << getSalario();
}

void Employee::salaryIncrease()
{
	int salaryIncrease;
	salaryIncrease = getSalario() + (getSalario() * 0.9);
	cout << "\n\nApos 10% de aumento o salario sera: " << salaryIncrease;
}
