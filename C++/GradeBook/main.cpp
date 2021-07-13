//main.cpp
//demonstra��o de classe GradeBook depois de separar sua interface de sua implementa��o
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::cin;
#include <locale.h>
#include "gradebook.h" // inclui a defini��o de classes GradeBook

//fun��o main
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string coursename;

	//exibe o valor iniciar de courseName para cada objeto GradeBook
	cout << "gradeBook1's initial course name is: \n"
		  << endl;

	cout << "Entre com o nome do curso: ";
 	getline(cin, coursename);
	
    //cria um objeto GradeBook
	GradeBook myGradeBook(coursename);

	//exibe courseName de cada gradeBook
    cout << "\ngradeBook's course name is: "
         << myGradeBook.getCourseName()
         << endl;

    //myGradeBook.determineClassAverage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
	return 0; // indica termina��o bem-sucedida
} // fim de main

