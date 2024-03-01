#include<iostream>
#include<string>
using namespace std;
class Shape {
protected:
	string color;

public:

	void setcolor(string color1) { color = color1; };
	string getcolor() {return color; };

	virtual void draw() = 0;

};
class Circle : public Shape
{
private:
	int x, y;
	int radis;
public:
	void setx(int X) { x = X; };
	void sety(int Y) { y = Y; };
	void setradis(int radis1) { radis = radis1; };
	int getx() { return x; };
	int gety() { return y; };
	int getradis() { return radis; };
	void draw(){ 
		cout << "Начертить " << color << " круг с координатами (" << x << ", " << y << " ) с радиуосом " << radis << endl;


	}


};
class Rectangle : public Shape
{
private:
	int x1, y1;
	int x2, y2;
public:
	void setx1(int X1) {x1 = X1; };
	void sety1(int Y1) {y1 = Y1; };
	void setx2(int X2) {x2 = X2; };
	void sety2(int Y2) {y2 = Y2; };
	int getx1() { return x1; };
	int gety1() { return y1; };
	int getx2() { return y2; };
	int gety2() { return y2; };
	void draw()
	{
		cout << "Начертите " << color << " Прямоугольник с координатами (" << x1 << ", " << y1 << ") и (" << x2 << ", " << y2 << ")" << endl;


 	}
	


};
int main()
{
	setlocale(LC_ALL, "RU");
	const int numShapes = 2; 
	Shape* shapes[numShapes];
	Circle circle;
	circle.setcolor("красный");
	circle.setx(0);
	circle.sety(0);
	circle.setradis(5);
	shapes[0] = &circle;

	Rectangle rectangle;
	rectangle.setcolor("голубой");
	rectangle.setx1(1);
	rectangle.sety1(1);
	rectangle.setx2(4);
	rectangle.sety2(3);
	shapes[1] = &rectangle;

	for (int i = 0; i < numShapes; i++)
	{
		shapes[i]->draw();
	}
	return 0;
}
