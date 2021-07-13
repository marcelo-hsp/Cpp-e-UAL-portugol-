#include <iostream>
#include <string>
#include <locale.h>
#include "invoice.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int qnt, prec;
    string descricao, identificacao;

    cout << "Entre com a descrição do item: ";
    getline(cin, descricao);
    cout << "Entre com a identificação do item: ";
    getline(cin, identificacao);

    cout << "Digite o valor por item: ";
    cin >> prec;
    cout << "Digite a quantidade comprada: ";
    cin >> qnt;

    Invoice fatura1(identificacao, descricao, qnt, prec);

    fatura1.getInvoiceAmount(qnt, prec, 0);

    return 0;
}
