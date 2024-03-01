#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	string nomer;
	string otdel;
	string dol;

public:
	Employee()
	{
		name = "";
		nomer = "";
		otdel = "";
		dol = "";
	}
	void set_name(string name1) { name = name1; };
	void set_nomer(string nomer1) { nomer = nomer1; };
	void set_otdel(string otdel1) { otdel = otdel1; };
	void set_dol(string dol1) { dol = dol1; };

	string get_name() { return name; };
	string get_nomer() { return nomer; };
	string get_otdel() { return otdel; };
	string get_dol() { return dol; };


};
int main()
{
	setlocale(LC_ALL, "RU");
	Employee rab1;
	rab1.set_name("Сьюзан Мейерс");
	rab1.set_nomer("47899");
	rab1.set_otdel("Бухгалтерия");
	rab1.set_dol("Вице-президент");

	Employee rab2;
	rab2.set_name("Марк Джоунс");
	rab2.set_nomer("39119");
	rab2.set_otdel("ИТ");
	rab2.set_dol("Программист");
	
	Employee rab3;
	rab3.set_name("Джой Роджерс");
	rab3.set_nomer("81774");
	rab3.set_otdel("Производственный");
	rab3.set_dol("Инженер");

	cout << "Первый рабочий" << endl;
	cout << "Имя: " << rab1.get_name() << endl;
	cout << "Номер: " << rab1.get_nomer() << endl;
	cout << "Отдел: " << rab1.get_otdel() << endl;
	cout << "Должность: " << rab1.get_dol() << endl;
	

	cout << "Второй рабочий: " << endl;
	cout << "Имя: " << rab2.get_name() << endl;
	cout << "Номер: " << rab2.get_nomer() << endl;
	cout << "Отдел: " << rab2.get_otdel() << endl;
	cout << "Должность: " << rab2.get_dol() << endl;


	cout << "Третий рабочий: " << endl;
	cout << "Имя: " << rab3.get_name() << endl;
	cout << "Номер: " << rab3.get_nomer() << endl;
	cout << "Отдел: " << rab3.get_otdel() << endl;
	cout << "Должность: " << rab3.get_dol() << endl;

	return 0;
}