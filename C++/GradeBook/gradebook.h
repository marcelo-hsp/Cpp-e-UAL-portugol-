/* gradebook.h
Defini��o da classe GradeBook. Esse programa revela a implementa��o p�blica de gradebook sem revelar
as implementa��es de fun��es membro de GradeBook
Que ser�o definidas em gradebook.cpp*/
#include <string>
using std::string;

//Defini��o da classe GradeBook
class GradeBook
{
public:
	GradeBook(string); //Construtor que inicializa courseName
	void setCourseName(string); //fun��o que configura courseName = nome do curso
	string getCourseName(); // fun��o que retorna o nome do curso
	void displayMessage(); // fun��o que exibe uma mensagem de boas-vindas
	void inputGrades(); // insere n�mero arbitr�rio de notas do usu�rio
	void displayGradeReport(); // exibe um relat�rio baseado nas notas
private:
	string courseName; // nome do curso para esse GradeBook
	int aCount; // contagem de notas A
	int bCount; // contagem de notas B
	int cCount; // contagem de notas C
	int dCount; // contagem de notas D
	int fCount; // contagem de notas F
};// fim da classe GradeBook





