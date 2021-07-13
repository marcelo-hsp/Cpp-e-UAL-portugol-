/* gradebook.h
Definição da classe GradeBook. Esse programa revela a implementação pública de gradebook sem revelar
as implementações de funções membro de GradeBook
Que serão definidas em gradebook.cpp*/
#include <string>
using std::string;

//Definição da classe GradeBook
class GradeBook
{
public:
	GradeBook(string); //Construtor que inicializa courseName
	void setCourseName(string); //função que configura courseName = nome do curso
	string getCourseName(); // função que retorna o nome do curso
	void displayMessage(); // função que exibe uma mensagem de boas-vindas
	void inputGrades(); // insere número arbitrário de notas do usuário
	void displayGradeReport(); // exibe um relatório baseado nas notas
private:
	string courseName; // nome do curso para esse GradeBook
	int aCount; // contagem de notas A
	int bCount; // contagem de notas B
	int cCount; // contagem de notas C
	int dCount; // contagem de notas D
	int fCount; // contagem de notas F
};// fim da classe GradeBook





