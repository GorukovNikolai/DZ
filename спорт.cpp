#include<iostream>
using namespace std;
class Sports {
public:
	virtual void play() {
		cout << "Занятие спортом " << endl;
	}

};
class Football : public Sports {
public:
	void play() override {
		cout << "Заниматься футболом " << endl;
	}
};
class Basketball : public Sports {
public:
	void play() override {
		cout << "Заниматься баскетболом " << endl;
	}
};
class Rugby : public Sports {
public:
	void play() override {
		cout << "Заниматься регби" << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Sports* football = new Football();
	Sports* basketball = new Basketball();
	Sports* rugby = new Rugby();
	football->play();
	basketball->play();
	rugby->play();
	delete football;
	delete basketball;
	delete rugby;
	return 0;
}
