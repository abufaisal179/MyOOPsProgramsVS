// Hey guys, it's Faisal's Program : TITLE >> Animal Sounds
#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark..." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow...uuu.." << endl;
    }
};

int main(void)
{

    Animal *p;
    vector<Animal *> animals;

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    // animals.push_back(new Animal()); // Cannot create an instance of an abstract class
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }

    for (int i = 0; i < animals.size(); i++)
    {
        delete animals[i];
    }

    return 0;
}
