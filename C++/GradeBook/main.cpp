//main.cpp
//demonstração de classe GradeBook depois de separar sua interface de sua implementação
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::cin;
#include <locale.h>
#include "gradebook.h" // inclui a definição de classes GradeBook

//função main
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
	return 0; // indica terminação bem-sucedida
} // fim de main

