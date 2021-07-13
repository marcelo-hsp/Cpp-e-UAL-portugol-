/*  invoice.cpp
*
*   EXERCÍCIO 3.12 DO CAPÍTULO 03 - DEITEL
*	MARCELO HENRIQUE DE SOUSA PINHEIRO, Todos os Direito Reservados
*	===================================================================================================================
*	(Class Invoice) Crie uma classe chamada Invoice que uma loja de suprimentos de informática
*	possa utilizar para representar uma fatura de um item vendido na loja. Uma Invoice (fatura)
*	deve incluir quatro partes das informações como membros de dados - um número identificador
*	(tipo string), uma descrição (tipo string), a quantidade comprada de um item (tipo int) e o
*	preço por item (tipo int). Sua classe deve ter um construtor que inicializa os quatro membros de dados.
*	Forneça uma função set e uma função get para cada membro de dados. Além disso, forneça uma função-membro
*	chamada getInvoiceAmount que calcula a quantia da fatura (isto é, multiplica a quantidade pelo preço por item)
*	e depois retorna a quantidade como um valor int. Se a quantidade não for positiva, ela deve ser configurada como 0.
*	Se o preço por item não for positivo, ele deve ser configurado como 0. Escreva um programa de teste que demonstre
*	as capacidades da classe Invoice
*	====================================================================================================================
*/
#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

Invoice::Invoice(string idfNumber, string itemDescription, int boughtQuantity, int priceByItem)
{
    setIdentifierNumber(idfNumber);
    setItemDescription(itemDescription);
    setBoughtQuantity(boughtQuantity);
    setPriceByItem(priceByItem);
}
void Invoice::setIdentifierNumber(string idfNumber)
{
    identifierNumber = idfNumber;
}

string Invoice::getIdentifierNumber()
{
    return identifierNumber;
}

void Invoice::setItemDescription(string itemDescription)
{
    description = itemDescription;
}

string Invoice::getItemDescription()
{
    return description;
}

void Invoice::setBoughtQuantity(int boughtQuantity)
{
    itemQuantity = boughtQuantity;
}

int Invoice::getBoughtQuantity()
{
    return itemQuantity;
}

void Invoice::setPriceByItem(int priceByItem)
{
    itemPrice = priceByItem;
}

int Invoice::getPriceByItem()
{
    return itemPrice;
}

int Invoice::getInvoiceAmount(int boughtQuantity, int priceByItem, int invoiceAmount)
{
    if (boughtQuantity <= 0 || priceByItem <= 0)
    {
        invoiceAmount = 0;
    }
    else
    {
        invoiceAmount = boughtQuantity * priceByItem;
    }
    cout << "N�mero identificador: " << getIdentifierNumber();
    cout << "\nDescri��o do item: " << getItemDescription();
    cout << "\nConta total da fatura (quantidade comprada vezes pre�o unit�rio): " << invoiceAmount;
}














