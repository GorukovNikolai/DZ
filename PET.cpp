#include <iostream>
#include <string>
using namespace std;
class Pet
{
private:
    string name;
    string animal_type;
    int age;

public:
    Pet()
    {
        name = "";
        animal_type = "";
        age = 0;
    }
    void set_name(string name1) { name = name1; };
    void set_animal_type(string  animal_type1) { animal_type = animal_type1; };
    void set_age(int age1) { age = age1; };
    string get_name() { return name; };
    string get_animal_type() { return  animal_type; };
    int get_age() { return age; };

};
int main() {
    setlocale(LC_ALL, "RU");
    Pet my_pet;
    my_pet.set_name("Барсик");
    my_pet.set_animal_type("кот");
    my_pet.set_age(5);

    cout << "Имя: " << my_pet.get_name() << endl;
    cout << "Тип животного: " << my_pet.get_animal_type() << endl;
    cout << "Возраст: " << my_pet.get_age() << endl;

    return 0;
}