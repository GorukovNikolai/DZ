#include<iostream>
using namespace std;
class Vehicle {
public:
	virtual void SpeedUp() { cout << "Скорость транспорта" << endl; }


};
class Car : public Vehicle {
public:
	void SpeedUp() override { cout << "Скорость машины " << endl; }
};
class Bicycle : public Vehicle {
public:
	void SpeedUp() override { cout << "Скорость велосипеда " << endl; }

};
int main() {
	setlocale(LC_ALL, "RU");
	Vehicle vehicle;
	vehicle.SpeedUp();
	Car car;
	car.SpeedUp();
	Bicycle bicycle;
	bicycle.SpeedUp();
	return 0;
}