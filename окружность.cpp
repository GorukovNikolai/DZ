#include<iostream>
#include<cmath>
using namespace std;
class Okr {
private:
	double x;
	double y;
	double rad;
public:
	Okr() : x(0), y(0), rad(1){}
	Okr(double r) : x(0), y(0), rad(r){}
	Okr(double cX, double cY, double r) : x(cX), y(cY), rad(r){}
	Okr(double x1, double y1, double x2, double y2) {
		double dim = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		rad = dim / 2;
		x = (x1 + x2) / 2;
		y = (y1 + y2) / 2;
	}
	void printInfo() {
		setlocale(LC_ALL, "RU");
		cout << "Центр окружности (" << x << ", " << y << "), радиус = " << rad << endl;
	}

};
int main() {
	Okr O1;
	Okr O2(2.5);
	Okr O3(2, 3, 5);
	Okr O4(0, 6, 0, 9);
	O1.printInfo();
	O2.printInfo();
	O3.printInfo();
	O4.printInfo();
	return 0;
}