#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
	string name;
	string makeNoise;
	string eat;
	string Descrition;
public:
	Animal()
	{
		name = "";
		makeNoise = "";
		eat = "";
		Descrition = "";
	}
	void setname(string name1) { name = name1; };
	void setmakeNoise(string make) { makeNoise = make; };
	void seteat(string Eat) { eat = Eat; };
	

	string getname() { return name; }
	string getmakeNoise() { return makeNoise; };
	string geteat() { return eat; };
	string getDescrition() { return Descrition; };

	
	

};
int main()
{
	setlocale(LC_ALL, "RU");
	Animal A1;
	A1.setname("Корова");
	A1.seteat("Сено, Трава");
	A1.setmakeNoise("Мууу");
	A1.getDescrition();

	cout << "Название животного: " << A1.getname() << endl;
	cout << "Еда животного: " << A1.geteat() << endl;
	cout << "Звук животного: " << A1.getmakeNoise() << endl;
	cout << A1.getDescrition() << endl;
}