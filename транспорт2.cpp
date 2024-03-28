#include<iostream>
using namespace std;
class Vehicle {
public:
	virtual void start() const = 0;
	virtual void stop() const = 0;

};
class Car : public Vehicle {
public:
	void start() const override {
		cout << "Двигатель запущен" << endl;

	}
	void stop() const override{
		cout << "Двигатель остановлен" << endl;
	}
};
class Moto : public Vehicle {
public:
	void start() const override{
		cout << "Двигатель запущен" << endl;

	}
	void stop() const override{
		cout << "Двигатель остановлен" << endl;

	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Vehicle* car = new Car();
	Vehicle* moto = new Moto();
	car->start();
	car->stop();
	moto->start();
	moto->stop();
	delete car;
	delete moto;
	return 0;
}