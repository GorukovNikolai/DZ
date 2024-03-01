#include<iostream>
#include<string>
using namespace std;
class Tovar
{
private:

	string name;
	int price; 
	int rating; 

public:
	void setname(string name1) { name = name1; };
	void setprice(int price1) { price = price1; }; 
	void setrating(int rating1) { rating = rating1; }; 
	string getname() { return name; };
	int getprice() { return price; }; 
	int getrating() { return rating; }; 

};

class Categor
{
private:
	string catname;
	Tovar* tovars;
	int numTovar;
public:
	void setcatname(string cat) { catname = cat; };
	string getcatname() { return catname; };
	void setnumTovar(int numTovar1) { numTovar = numTovar1; }; 
	int getnumTovar() { return numTovar; }; 

	void createTovars() { 
		tovars = new Tovar[numTovar];
	}
	void addTovar(const Tovar& tovar, int index) {
		if (index >= 0 && index < numTovar) {
			tovars[index] = tovar;
		}
	}
	void displayTovar() {
		cout << "Категория: " << catname << endl;
		for (int i = 0; i < numTovar; i++)
		{
			cout << "Имя: " << tovars[i].getname() << " Цена: " << tovars[i].getprice() << " Рейтинг: " << tovars[i].getrating() << endl;

		}
		cout << endl;
	}


};

class Basket
{
private:
	Tovar* putTovars;
	int numputTovars;
public:
	void createBasket() { 
		putTovars = new Tovar[numputTovars];
	}
	void addputTovar(const Tovar& tovar, int index) 
	{
		if (index >= 0 && index < numputTovars)
		{
			putTovars[index] = tovar;
		}
	}
	void displayPut() {
		cout << "Приобретенные товары: " << endl;
		for (int i = 0; i < numputTovars; i++)
		{
			cout << "Имя: " << putTovars[i].getname() << " Цена: " << putTovars[i].getprice() << " Рейтинг: " << putTovars[i].getrating() << endl;
		}
	}
};

class User
{
private:
	string username;
	string password;
	Basket basket;
public:
	void setusername(string name) { username = name; };
	void setpassword(string pass) { password = pass; };
	string getusername() { return username; };
	string getpassword() { return password; };

	void addBasket(const Tovar& tovar, int index) 
	{
		basket.addputTovar(tovar, index);

	}
	void displayBasket() {
		cout << "Покупатель: " << username << endl;
		basket.displayPut();
	}

};

int main()
{
	setlocale(LC_ALL, "RU");
	Tovar T1;
	T1.setname("Шоколадка");
	T1.setprice(100); 
	T1.setrating(4); 
	Tovar T2;
	T2.setname("Жевачка");
	T2.setprice(55); 
	T2.setrating(1); 
	cout << "Названия товара: " << T1.getname() << endl;
	cout << "Цена: " << T1.getprice() << endl;
	cout << "Рейтинг: " << T1.getrating() << endl;
	cout << "Названия товара: " << T2.getname() << endl;
	cout << "Цена: " << T2.getprice() << endl;
	cout << "Рейтинг: " << T2.getrating() << endl;

	Categor C1;
	C1.setcatname("Сладость");
	C1.setnumTovar(2); 
	C1.createTovars(); 
	for (int i = 0; i < 2; i++) {
		C1.addTovar(T1, i); 
	}
	C1.displayTovar();

	User U1;
	U1.setusername("Иван Иванов");
	U1.setpassword("303-320-22");
	U1.addBasket(T1, 0); 

	U1.displayBasket(); 

	return 0;
}