#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;
	int age;

public:
	Student()
	{
		name = "";
		age = 0;

	}
	void setname(string n) { name = n; };
	void setage(int Age) { age = Age; };
	string getname() { return name; };
	int getage() { return age; };

	void display()
	{
		setlocale(LC_ALL, "RU");
		cout << "Имя: " << name << ", Возраст: " << age << endl;

	}


};
class Aspirant : public Student
{
private:
	string reserchRab;

public:
	void setreserchRab(string rab) { reserchRab = rab; };
	string getreserchRab() { return  reserchRab; };

	void display()
	{
		Student::display();
		cout << "Научная работа: " << reserchRab << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "RU");
	Student S1;
	S1.setname("Николай");
	S1.setage(18);
	Aspirant A1;
	A1.setname("Степан");
	A1.setage(22);
	A1.setreserchRab("Создание сайта");

	cout << "Информация о студенте: " << endl;
	S1.display();

	cout << "Информация о аспиранте: " << endl;
	A1.display();
	return 0;


}