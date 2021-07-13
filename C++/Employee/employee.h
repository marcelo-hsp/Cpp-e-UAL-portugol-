/*  employee.cpp
*
*	(Classe Emplyee) Crie uma classe chamada Employee que inclua tr�s partes
*	de informa��o como membro de dados - um nome (tipo string), um sobrenome (tipo string) e um
*	sal�rio mensal (tipo int). Sua classe deve conter um construtor que inicialize os tr�s 
*	membros de dados. Forne�a uma fun��o set e uma fun��o get para cada membro de dados.
*	Se o sal�rio mensal n�o for positivo, configure-o como 0. Esreva um programa de teste
*	que demonstre as capacidades da classe. Crie dois objetos Employee e exiba o sal�rio
*	anual de cada objeto. Ent�o de a cada Employee um aumento de 10% e exiba novamente
*	o salario anual de cada Employee
*
*	Marcelo Henrique de Sousa Pinheiro
*/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	Employee(string nomeEmployee, string sobrenomeEmployee, int salarioEmployee);
	void setNome(string nomeEmployee);
	void setSobrenome(string sobrenomeEmployee);
	void setSalario(int salarioEmployee);
	string getNome();
	string getSobrenome();
	int getSalario();
	void displayInformations();
	void salaryIncrease();	
private:
      string nome;
		string sobrenome;
		int salario;
};

