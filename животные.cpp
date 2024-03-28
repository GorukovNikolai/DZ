#include<iostream>
using namespace std;
class Animal {
public:
	virtual void Sound(){
		cout << "Звук животного " << endl;
	}
};
class Bird :public Animal {
public:
	void Sound() override {
		cout << "Звук птиц " << endl;
	}
};
class Cat :public Animal {
public:
	void Sound() override {
		cout << "Звук кота " << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Animal animal;
	animal.Sound();
	Bird bird;
	bird.Sound();
	Cat cat;
	cat.Sound();
	return 0;
}