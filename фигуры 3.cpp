#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    virtual double CalculationArea() const = 0;
};

class Circle : public Shape {
protected:
    double radius; 

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Рисуем круг" << endl;
    }

    double CalculationArea() const override {
        return 3.14 * radius * radius;
    }
};

class Cylinder : public Circle {
private:
    double height;

public:
    Cylinder(double r, double h) : Circle(r), height(h) {}

    void draw() const override {
        cout << "Рисуем цилиндр" << endl;
    }

    double CalculationArea() const override {
        return 2 * 3.14 * radius * (radius + height);
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Circle circle(5);
    Cylinder cylinder(5, 10);

    circle.draw();
    cout << "Площадь круга: " << circle.CalculationArea() << endl;

    cylinder.draw();
    cout << "Площадь поверхности цилиндра: " << cylinder.CalculationArea() << endl;

    return 0;
}
