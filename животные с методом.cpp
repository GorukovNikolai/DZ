#include<iostream>
using namespace std;
class Animal {
public:
	virtual void move() const = 0;
	virtual void makeSound() const = 0;

};
class Bird:public Animal {
public:
	void move() const override {
		cout << "Птицы летают" << endl;
	}
	void makeSound() const override {
		cout << "Птицы щебечат" << endl;

	}

};
class Pantera : public Animal {
public:
	void move() const override {
		cout << "Пантеры бегают на четырех лапах" << endl;

	}
	void makeSound() const override {
		cout << "Пантеры рячат" << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Animal* bird = new Bird;
	Animal* pantera = new Pantera;
	cout << "Птицы: ";
	bird->move();
	bird->makeSound();
	cout << "Пантера: ";
	pantera->move();
	pantera->makeSound();
	delete bird;
	delete pantera;
	return 0;
}