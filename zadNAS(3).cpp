#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string Name;
	string Fakult;
	string group;
	int otm;
	

public:
	Student()
	{
		Name = "";
		Fakult = "";
		group = "";
		otm = 0;
	
	}
	void setName(string Name1) { Name = Name1; };
	void setFakult(string Fakult1) { Fakult = Fakult1; };
	void setgroup(string group1) { group = group1; };
	void setotm(int otmmm) { otm = otmmm; };




	string getName() { return Name; };
	string getFakult() { return Fakult; };
	string getgroup() { return group; };
	int getotm() { return otm; }
	int getStep() {
		if (otm == 5) {
			return 2000;
		}
		else {
			return 1900;
		}
	}
	
	
	




};
class Aspirant : public Student
{
private:
	int otm1;

public:
	Aspirant() {
		otm1 = 0;
	}
	void setotm1(int otmm) { otm1 = otmm; };

	int getotm1() { return otm1; };

	int getStep()
	{
		if (otm1 == 5) {
			return 2500;
		}
		else {
			return 2200;
		}
	}



};
int main()
{
	setlocale(LC_ALL, "RU");
	Student stud;
	stud.setName("Николай");
	stud.setFakult("ИТБ");
	stud.setgroup("ПИИ23");
	stud.setotm(5);
	

	Aspirant asp;
	asp.setName("Иван");
	asp.setFakult("ИТБ");
	asp.setgroup("ПИЭ20");
	asp.setotm1(4);
	
	cout << "Студент " << endl;
	cout << "Имя: " << stud.getName() << endl;
	cout << "Факультет: " << stud.getFakult() << endl;
	cout << "Группа: " << stud.getgroup() << endl;
	cout << "Оценка: " << stud.getotm() << endl;
	cout << "Стипендия: " << stud.getStep() << endl;
	

	cout << "Аспирант " << endl;
	cout << "Имя: " << asp.getName() << endl;
	cout << "Факультет: " << asp.getFakult() << endl;
	cout << "Группа: " << asp.getgroup() << endl;
	cout << "Оценка: " << asp.getotm1() << endl;
	cout << "Стипендия: " << asp.getStep() << endl;
	

	

	return 0;
}