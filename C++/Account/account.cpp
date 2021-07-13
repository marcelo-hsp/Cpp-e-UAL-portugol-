/* 	    account.cpp
*
*   EXERCÍCIO 3.12 DO CAPÍTULO 03 - DEITEL
*	MARCELO HENRIQUE DE SOUSA PINHEIRO, Todos os Direito Reservados
*	==============================================================================================
*	(classe Account) Crie uma classe chamada Account que um banco poderia utilizar
*	para representar contas bancárias dos clientes. Sua classe deve incluir um membro
*	de dados de tipo int para representar o saldo da conta. [Nota: Nos capítulos subsequentes
*	utilizaremos números que contém pontos de fração decimal (por exemplo, 2,75) - chamados
*	valores de ponto flutuante - para representar quantias em dólar.]. Sua classe deve receber
*	um construtor que recebe um saldo inicial e o utiliza para inicializar o membro de dados.
*	O construtor deve validar o saldo inicial para assegurar que ele seja maior ou igual a 0.
*	Se não, o saldo deve ser configurado como 0 e o construtor deve exibir uma mensagem de erro
*	indicando que o saldo inicial era inválido. A classe deve fornecer três funções-membro. A
*	função membro 'credit' deve adicionar uma quantia ao saldo atual. A função-membro 'debit'
*	deve retirar o dinheiro de Account e assegurar que a quantia de débito não exceda o saldo
*	de Account. Se exceder, o saldo deve permanecer inalterado e a função deve imprimir uma
*	mensagem que indica "Debit amount exceeded account balance." A função membro getBalance
*	deve retornar o saldo atual. Crie um programa que cria dois objetos Account e testa as funções
*	membro da classe Account.
*	===============================================================================================
*/

#include <iostream>
#include "account.h"

using namespace std;
/*
public:
    Account(int initialBalance);
    void setBalance(int initialBalance);
    void credit(int accountBalance, int insertCredit, int actualBalance);
    void debit(int accountBalance, int insertDebit, int actualBalance);
    int getBalance();
    void displayBalance();
private:
    int accountBalance;
*/
Account::Account(int initialBalance)
{
    setBalance(initialBalance);
}

void Account::setBalance(int initialBalance)
{
    if (initialBalance <= 0)
		{
			accountBalance = 0;
			cout << "Initial balance informed is invalid!\n"
				<< endl;
		}
		else
		{
			accountBalance = initialBalance;
		}
}

void Account::credit(int accountBalance, int insertedCredit, int actualBalance)
{
    actualBalance = accountBalance + insertedCredit;
    setBalance(actualBalance);
}

void Account::debit(int accountBalance, int insertedDebit, int actualBalance)
{
    if (insertedDebit > accountBalance)
		{
			cout << "Debit amount exceeded account balance"
				<< endl;
		}
		else
		{
			actualBalance = accountBalance - insertedDebit;
			setBalance(actualBalance);
		}
}

int Account::getBalance()
{
    return accountBalance;
}

void Account::displayBalance()
{
    cout << "Actual balance is: " << getBalance();
}
