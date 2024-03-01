#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string firstName;
	string lastName;
	string group;
	double averageMark;
public:
	Student(){
	firstName = "";
	lastName = "";
	group = "";
	averageMark = 0.0;


	}
	void setfirstname(string firstname1) {  firstName = firstname1; };
	void setlastName(string lastName1) { lastName = lastName1; };
	void setgroup(string group1) { group = group1; };
	void setaverageMark(double averageMark1) { averageMark = averageMark1; };

	string getfirstName() { return firstName; };
	string getlastName() { return lastName; };
	string getgroup() { return group; };
	double getaverageMark() { return averageMark; };

	
};
int main()
{
	setlocale(LC_ALL, "RU");
	Student stud;
	stud.setfirstname("Николай =>");
	stud.setlastName("Коля");
	stud.setgroup("ПИИ23");
	stud.setaverageMark(4.5);

	cout << "Студент: " << stud.getfirstName() << " " << stud.getlastName() << endl;
	cout << "Группа: " << stud.getgroup() << endl;
	cout << "Средняя оценка: " << stud.getaverageMark() << endl;

	stud.setaverageMark(5.0);
	cout << "Измененная средняя оценка:" << stud.getaverageMark() << endl;

	return 0;
}
