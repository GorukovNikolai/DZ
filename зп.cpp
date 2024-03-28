#include<iostream>
using namespace std;
class Employce {
public:
	virtual double getSalary() = 0;


};
class Manager : public Employce {
public:
	double getSalary() override {
		return 75000;
	}
};
class Programmer : public Employce {
public:
	double getSalary() override {
		return 150000;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Employce* manager = new Manager();
	Employce* programmer = new Programmer();
	cout << "Зарплата менеджера: " << manager->getSalary() << endl;
	cout << "Зарплата программиста: " << programmer->getSalary() << endl;
	delete manager;
	delete programmer;
	return 0;
}