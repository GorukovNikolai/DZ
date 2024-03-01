#include<iostream>
#include<string>
using namespace std;
class PersonalInfornation {
private:
	string name;
	string addres;
	int age;
	string phonenum;
public:
	PersonalInfornation() {
		name = "";
		addres = "";
		age = 0;
		phonenum = "";
	}
	void set_name(string name1) { name = name1; };
	void set_addres(string addres1) { addres = addres1; };
	void set_age(int age1) { age = age1; };
	void set_phonenum(string phonenum1) { phonenum = phonenum1; };
	string get_name() { return name; };
	string get_addres() { return addres; };
	int get_age() { return age; };
	string get_phonenum() { return phonenum; };

};
int main()
{
	setlocale(LC_ALL, "RU");
	PersonalInfornation myself;
	myself.set_name("Николай");
	myself.set_addres("Город Нижний Новгород улица мира дом 4");
	myself.set_age(18);
	myself.set_phonenum("89677131468");

	PersonalInfornation f1;
	f1.set_name("Павел");
	f1.set_addres("Город Дзержинс улица Родионова дом 193");
	f1.set_age(18);
	f1.set_phonenum("89101372561");


	PersonalInfornation f2;
	f2.set_name("Андрей");
	f2.set_addres("Город Заволжье улица Пушкина дом 14");
	f2.set_age(18);
	f2.set_phonenum("89995789234");

	cout << "Моя информация: " << endl;
	cout << "Имя: " << myself.get_name() << endl;
	cout << "Адрес: " << myself.get_addres() << endl;
	cout << "Возраст: " << myself.get_age() << endl;
	cout << "Мобильный телефон: " << myself.get_phonenum() <<endl;

	cout << "Информация Первого друга: " << endl;
	cout << "Имя: " << f1.get_name() << endl;
	cout << "Адрес: " << f1.get_addres() << endl;
	cout << "Возраст: " << f1.get_age() << endl;
	cout << "Мобильный телефон: " << f1.get_phonenum() << endl;

	cout << "Информация второго друга: " << endl;
	cout << "Имя: " << f2.get_name() << endl;
	cout << "Адрес: " << f2.get_addres() << endl;
	cout << "Возраст: " << f2.get_age() << endl;
	cout << "Мобильный телефон: " << f2.get_phonenum() << endl;

	return 0;
}