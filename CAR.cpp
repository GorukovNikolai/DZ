#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	int year_model;
	string manufacturer;
	int speed;
public:
	Car(int year, const string& make) {
		year_model = year;
		manufacturer = make;
		speed = 0;

	}
	void acclerate() { speed += 5; }
	void brake() {
		if (speed >= 5)
			speed -= 5;
		else
			speed = 0;
	}
	int get_speed() { return speed; };


};
int main()
{
	setlocale(LC_ALL, "RU");
	Car my_car(2005, "LADA");
	cout << "Ускорение: " << endl;
	for (int i = 0; i < 5; i++)
	{
		my_car.acclerate();
		cout << "Изменение скорости: " << my_car.get_speed() << endl;
	}
	cout << "Торможение: " << endl;
	for (int i = 0; i < 5; i++) {
		my_car.brake();
		cout << "Измение скорости: " << my_car.get_speed() << endl;

	}
	return 0;
}