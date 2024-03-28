#include<iostream>
using namespace std;
class Ration {
private:
	int num;
	int dem;
public:
	Ration(int n = 0, int d = 1) : num(n), dem(d) {}
	void print() {
		cout << num << "/" << dem;
	}
	Ration operator+(const Ration& other) {
		int n = num * other.dem + other.num + dem;
		int d = dem * other.dem;
		return Ration(n, d);
	}
	Ration operator*(const Ration& other) {
		int n = num * other.num;
		int d = dem * other.dem;
		return Ration(n, d);
	}
	friend ostream& operator<<(ostream& out, const Ration& r) {
		out << r.num << "/" << r.dem;
		return out;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Ration a(1, 2);
	Ration b(1, 3);
	Ration sum = a + b;
	Ration pro = a * b;
	cout << "Сумма: " << sum << endl;
	cout << "Умножение: " << pro << endl;
	return 0;
}

