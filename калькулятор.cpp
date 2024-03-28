#include<iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double getArea() override {
        return 3.14 * radius * radius;
    }

   
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double getArea() override {
        return length * width;
    }

    
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double getArea() override {
        return 0.5 * base * height;
    }

    
};

int main() {
    setlocale(LC_ALL, "RU");
    Shape* circle = new Circle(6);
    Shape* rectangle = new Rectangle(5, 7);
    Shape* triangle = new Triangle(4, 9);
    cout << "Площадь круга " << circle->getArea() << endl;
    cout << "Площадь прямоугольника " << rectangle->getArea() << endl;
    cout << "Площадь треугольника " << triangle->getArea() << endl;
    delete circle;
    delete rectangle;
    delete triangle;
    return 0;
}