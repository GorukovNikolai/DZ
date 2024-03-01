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
	p1.setname("Иван");
	p1.setage(25);
	User p2;
	p2.setname("Вася");
	p2.setage(26);



	

	Worker s1;
	s1.setsalary(1000);

	Worker s2;
	s2.setsalary(2000);
	cout << "Имя: " << p1.getname() << endl;
	cout << "Возраст: " << p1.getage() << endl;
	cout << "Зарплата: " << s1.getsalary() << endl;
	cout << "Имя: " << p2.getname() << endl;
	cout << "Возраст: " << p2.getage() << endl;
	cout << "Зарплата: " << s2.getsalary() << endl;

	

	int Srsalary = (s1.getsalary() + s2.getsalary()) / 2;
	cout << "Средняя зарплата: " << Srsalary << endl;


	



	return 0;
}

