//gradebook.cpp
//Definições de funções membro de GradeBook
//Esse arquivo contém implementações das funções-membro prototipadas em gradebook.h
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "gradebook.h"

//O construtor inicializa courseName com a string fornecida como argumento
// Inicializa membros de dados de contador como 0
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	aCount = 0; // inicializa a contagem de notas A como 0
	bCount = 0; // inicializa a contagem de notas B como 0
	cCount = 0; // inicializa a contagem de notas C como 0
	dCount = 0; // inicializa a contagem de notas D como 0
	fCount = 0; // inicializa a contagem de notas F como 0
} // fim do construtor GradeBook

//função para configurar o nome do curso assegura que o curso terá no máximo 25 caracteres
void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25) // se o numero tiver menos ou igual a 25 caracteres
        courseName = name;

    if (name.length() > 25) // se o nome tiver mais que 25 caracteres
    {
        //configura courseName com os primeiros 25 caracteres do parâmetro name
        courseName = name.substr(0, 25); // inicia em 0, comprimento de 25

        cout << "Nome \"" << name << "\" excedeu o tamanho máximo de 25 caracteres.\n"
            << "Nome do curso está limitado a 25 caracteres.\n" << endl;
    }
}//fim da função setCourseName

//função para obter o nome do curso
string GradeBook::getCourseName()
{
	return courseName; // retorna courseName do objeto
}// fim da função getCourseName

//Exibe mensagem de boas-vindas ao usuário de GradeBook
void GradeBook::displayMessage()
{
	//chama getCourseName para obter o nome do curso e imprimi-lo
	cout << "Bem-vindo ao GradeBook para\n" << getCourseName()
		<< "!" << endl;
}//fim da função displayMessage

// Insere um número arbitrário de notas fornecidas pelo usuário; atualiza o contador de notas
void GradeBook::inputGrades()
{
	int grade; // nota inserida pelo usuário
	
	cout << "Entre com letter grades." << endl
		  << "Entre com E0F character to end input." << endl;
		  
   // faz loop até usuário digitar a sequencia de teclas de fim do arquivo
   while ((grade = cin.get()) != EOF)
   {
   	// determina que a nota foi inserida
   	switch (grade) // instrução switch aninhada em while
   	{
   		case 'A' : // a nota era letra A maiúscula
   		case 'a' : // ou a minúscula
   			  aCount++; // incremente aCount
   			  break;
   			  
		case 'B' : // a nota era letra B maiúscula
   		case 'b' : // ou c minúscula
   			  bCount++; // incremente bCount
   			  break;
   			  
		case 'C' : // a nota era letra C maiúscula
   		case 'c' : // ou c minúscula
   			  cCount++; // incremente cCount
   			  break;
   			  
		case 'D' : // a nota era letra D maiúscula
   		case 'd' : // ou d minúscula
   			  dCount++; // incremente dCount
   			  break;
   			  
		case 'F' : // a nota era letra F maiúscula
   		case 'f' : // ou f minúscula
   			  fCount++; // incremente fCount
			  break;
			
		case '\n' : // ignora nova linha
		case '\t' : // tabulações
		case ' ' : // espaços em entrada
	  		  break;
			
		default: // captura todos os outros caracteres
			  cout << "Letra incorreta inserida."
	       		 << " Entre com uma nova letra" << endl;
	          break; // opcional; sairá de switch de qualquer jeito 
		} // fim de switch
	} // fim de while
} // fim da classe imputGrades

// exibe um relatório baseado nas notas inseridas pelo usuário
void GradeBook::displayGradeReport()
{
	// gera a saída de resumo  de resultados
	cout << "\n\nNumero de estudantes que receberam cada letra: "
		  << "\nA: " << aCount // exibe o numero de notas A
		  << "\nB: " << bCount // exibe o numero de notas B
		  << "\nC: " << cCount // exibe o numero de notas C
		  << "\nD: " << dCount // exibe o numero de notas D
		  << "\nE: " << fCount // exibe o numero de notas F
		  << endl;
}

