#include<iostream>
#include<string>
using namespace std;
class User
{
private:
	string name;
	int age;

public:
	User()
	{
		name = "";
		age = 0;

	}
	void setname(string name1) { name = name1; };
	void setage(int age1) { age = age1; };

	string getname() { return name; };
	int getage() { return age; };

};
class Worker : public User
{
private:
	int salary;

public:
	Worker()
	{
		salary = 0;

	}
	void setsalary(int salary1) { salary = salary1; };
	
	int getsalary() { return salary; };


};
int main()
{
	setlocale(LC_ALL, "RU");

	User p1;
	p1.setname("Николай");
	p1.setage(18);

	cout << "Имя: " << p1.getname() << endl;
	cout << "Возраст: " << p1.getage() << endl;

	Worker p2;
	p2.setsalary(1000000);

	cout << "Зарплата: " << p2.getsalary() << endl;

	return 0;
}

