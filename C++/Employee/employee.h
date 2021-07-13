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

