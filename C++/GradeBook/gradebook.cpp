//gradebook.cpp
//Defini��es de fun��es membro de GradeBook
//Esse arquivo cont�m implementa��es das fun��es-membro prototipadas em gradebook.h
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

//fun��o para configurar o nome do curso assegura que o curso ter� no m�ximo 25 caracteres
void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25) // se o numero tiver menos ou igual a 25 caracteres
        courseName = name;

    if (name.length() > 25) // se o nome tiver mais que 25 caracteres
    {
        //configura courseName com os primeiros 25 caracteres do par�metro name
        courseName = name.substr(0, 25); // inicia em 0, comprimento de 25

        cout << "Nome \"" << name << "\" excedeu o tamanho m�ximo de 25 caracteres.\n"
            << "Nome do curso est� limitado a 25 caracteres.\n" << endl;
    }
}//fim da fun��o setCourseName

//fun��o para obter o nome do curso
string GradeBook::getCourseName()
{
	return courseName; // retorna courseName do objeto
}// fim da fun��o getCourseName

//Exibe mensagem de boas-vindas ao usu�rio de GradeBook
void GradeBook::displayMessage()
{
	//chama getCourseName para obter o nome do curso e imprimi-lo
	cout << "Bem-vindo ao GradeBook para\n" << getCourseName()
		<< "!" << endl;
}//fim da fun��o displayMessage

// Insere um n�mero arbitr�rio de notas fornecidas pelo usu�rio; atualiza o contador de notas
void GradeBook::inputGrades()
{
	int grade; // nota inserida pelo usu�rio
	
	cout << "Entre com letter grades." << endl
		  << "Entre com E0F character to end input." << endl;
		  
   // faz loop at� usu�rio digitar a sequencia de teclas de fim do arquivo
   while ((grade = cin.get()) != EOF)
   {
   	// determina que a nota foi inserida
   	switch (grade) // instru��o switch aninhada em while
   	{
   		case 'A' : // a nota era letra A mai�scula
   		case 'a' : // ou a min�scula
   			  aCount++; // incremente aCount
   			  break;
   			  
		case 'B' : // a nota era letra B mai�scula
   		case 'b' : // ou c min�scula
   			  bCount++; // incremente bCount
   			  break;
   			  
		case 'C' : // a nota era letra C mai�scula
   		case 'c' : // ou c min�scula
   			  cCount++; // incremente cCount
   			  break;
   			  
		case 'D' : // a nota era letra D mai�scula
   		case 'd' : // ou d min�scula
   			  dCount++; // incremente dCount
   			  break;
   			  
		case 'F' : // a nota era letra F mai�scula
   		case 'f' : // ou f min�scula
   			  fCount++; // incremente fCount
			  break;
			
		case '\n' : // ignora nova linha
		case '\t' : // tabula��es
		case ' ' : // espa�os em entrada
	  		  break;
			
		default: // captura todos os outros caracteres
			  cout << "Letra incorreta inserida."
	       		 << " Entre com uma nova letra" << endl;
	          break; // opcional; sair� de switch de qualquer jeito 
		} // fim de switch
	} // fim de while
} // fim da classe imputGrades

// exibe um relat�rio baseado nas notas inseridas pelo usu�rio
void GradeBook::displayGradeReport()
{
	// gera a sa�da de resumo  de resultados
	cout << "\n\nNumero de estudantes que receberam cada letra: "
		  << "\nA: " << aCount // exibe o numero de notas A
		  << "\nB: " << bCount // exibe o numero de notas B
		  << "\nC: " << cCount // exibe o numero de notas C
		  << "\nD: " << dCount // exibe o numero de notas D
		  << "\nE: " << fCount // exibe o numero de notas F
		  << endl;
}

