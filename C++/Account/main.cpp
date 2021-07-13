#include <iostream>
#include "account.h"
#include <string>
using namespace std;

int main()
{
    int insertedBalance, credit, debit, insertedBalance2;

    cout << "Enter to the initial balance for account1: "
		<< endl;
		cin >> insertedBalance;

    Account account1(insertedBalance);

    cout << "Enter with the credit: ";
		cin >> credit;

    account1.credit(insertedBalance, credit, 0);
    account1.displayBalance(); // chamada de função

	cout << "\n\nEnter to the initial balance for account2: ";
		cin >> insertedBalance2;

	Account account2(insertedBalance2);

	cout << "Enter with the debit: ";
		cin >> debit;
	account2.debit(insertedBalance2, debit, 0);
	account2.displayBalance();

    return 0;
}
