#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    virtual double CalculationArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Рисуем круг" << endl;
    }

    double CalculationArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    void draw() const override {
        cout << "Рисуем квадрат" << endl;
    }

    double CalculationArea() const override {
        return side * side;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() const override {
        cout << "Рисуем треугольник" << endl;
    }

    double CalculationArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Shape* circle = new Circle(5);
    Shape* square = new Square(4);
    Shape* triangle = new Triangle(3, 4);

    circle->draw();
    cout << "Площадь круга: " << circle->CalculationArea() << endl;

    square->draw();
    cout << "Площадь квадрата: " << square->CalculationArea() << endl;

    triangle->draw();
    cout << "Площадь треугольника: " << triangle->CalculationArea() << endl;

    delete circle;
    delete square;
    delete triangle;

    return 0;
}
