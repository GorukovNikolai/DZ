#include<iostream>
#include<cmath>
using namespace std;
class Shape {
public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;

};
class Circle : public Shape {
private:
	double rad;
public:
	Circle(double r) : rad(r){}
	double getArea() const override {
		return 3.14 * rad * rad;
	}
	double getPerimeter() const override {
		return 2 * 3.14 * rad;
	}
};
class Rectangle : public Shape {
private:
	double shir;
	double dlin;
public:
	Rectangle(double d, double s) : dlin(d), shir(s){}
	double getArea() const override {
		return dlin * shir;
	}
	double getPerimeter() const override {
		return 2 * (dlin + shir);
	}
};
class Triangle : public Shape {
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3){}
	double getArea() const override {
		double s = (side1 + side2 + side3) / 2;
		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}
	double getPerimeter() const override {
		return side1 + side2 + side3;
	}
};
int main() {
	setlocale(LC_ALL, "RU");
	Shape* circle = new Circle(7);
	Shape* rectangle = new Rectangle(5, 7);
	Shape* triangle = new Triangle(4, 5, 6);
	cout << "Площадь окружности: " << circle->getArea() << endl;
	cout << "Периметр окружности: " << circle->getPerimeter() << endl;
	cout << "Площадь прямоугольника: " << circle->getArea() << endl;
	cout << "Периметр прямоугольника: " << circle->getPerimeter() << endl;
	cout << "Площадь треугольника: " << circle->getArea() << endl;
	cout << "Периметр треугольника: " << circle->getPerimeter() << endl;
	delete circle;
	delete rectangle;
	delete triangle;
	return 0;
}