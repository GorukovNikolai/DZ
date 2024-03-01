#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal(const string& name) : name(name) {}

    void makeNoise() {
        cout << "Муу" << endl;
    }

    void eat() {
        cout << "Овощи, комбикорм, Овез" << endl;
    }

    void setname(string name1) { name = name1; };

    string getDescription() { return "Четвероногое парно копытное животное"; };
    string getname() { return name; };
};

class Cat : public Animal {
public:
    Cat(const string& name) : Animal(name) {}

    void eat()  { cout << "Рабы, корма" << endl; };
    void makeNoise()  { cout << "Мяуу" << endl; };
    string getDescription() { return "Пушистое животное с когтями, живет почти в каждом доме"; };
};

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}

    void eat()  { cout << "Кости" << endl; };
    void makeNoise()  { cout << "Гафф" << endl; };
    string getDescription()  { return "Это животное, которое охраняет дом"; };
};

class Vet {
private:
    string name;
public:
    Vet(const string& name) : name(name) {}
    void setname(string name4) { name = name4; };
    string getname() { return name; };
    void treatAnimal(Animal& animal) {
        cout << "Ветеринар " << name << " лечит: " << animal.getDescription() << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "RU");
    Animal A1("БАРС");
    A1.makeNoise();
    A1.eat();
    cout << "Имя животного: " << A1.getname() << endl;
    cout << A1.getDescription() << endl;

    Cat C1("Тишка");
    C1.makeNoise();
    C1.eat();
    cout << "Имя кота: " << C1.getname() << endl;
    cout << C1.getDescription() << endl;

    Dog D1("Ричч");
    D1.makeNoise();
    D1.eat();
    cout << "Имя собаки: " << D1.getname() << endl;
    cout << D1.getDescription() << endl;

    Vet vet("Иван");
    vet.treatAnimal(D1);
    vet.treatAnimal(C1);

    return 0;
}
