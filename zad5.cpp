#include<iostream>
#include <string>
using namespace std;
class Retailltem
{
private:
	
	string opis;
	int kolvo;
	int praiz;

public:
	Retailltem()
	{
		
		opis = "";
		kolvo = 0;
		praiz = 0;
	}
	
	void set_opis(string opis1) { opis = opis1; };
	void set_kolvo(int kolvo1) { kolvo = kolvo1; };
	void set_praiz(int praiz1) { praiz = praiz1; };
	
	
	string get_opis() { return opis; };
	int get_kolvo() { return kolvo; };
	int get_praiz() { return praiz; };

};
int main()
{
	setlocale(LC_ALL, "RU");

	Retailltem t1;
	t1.set_opis("Пиджак");
	t1.set_kolvo(12);
	t1.set_praiz(59.95);
	
	Retailltem t2;
	t2.set_opis("Дизайнерские джинсы");
	t2.set_kolvo(40);
	t2.set_praiz(34.95);

	Retailltem t3;
	t3.set_opis("Рубашка");
	t3.set_kolvo(20);
	t3.set_praiz(24.95);

	cout << "Товар 1: " << endl;
	cout << "Описание: " << t1.get_opis() << endl;
	cout << "Количество товаров: " << t1.get_kolvo() << endl;
	cout << "Цена: " << t1.get_praiz() << endl;
	
	cout << "Товар 2: " << endl;
	cout << "Описание: " << t2.get_opis() << endl;
	cout << "Количество товаров: " << t2.get_kolvo() << endl;
	cout << "Цена: " << t2.get_praiz() << endl;

	cout << "Товар 3: " << endl;
	cout << "Описание: " << t3.get_opis() << endl;
	cout << "Количество товаров: " << t3.get_kolvo() << endl;
	cout << "Цена: " << t3.get_praiz() << endl;

	return 0;
}