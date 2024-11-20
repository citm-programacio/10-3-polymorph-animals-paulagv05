#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal created!" << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal destroyed!" << endl;
    }
    virtual void speak()
    {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog created!" << endl;
    }

    ~Dog() override
    {
        cout << "Dog destroyed!" << endl;
    }

    void speak() override
    {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        cout << "Cat created!" << endl;
    }
    
    ~Cat() override
    {
        cout << "Cat destroyed!" << endl;
    }
    void speak() override
    {
        cout << "Meow! Meow!" << endl;
    }
};

int main()
{
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    cout << "Dog says: ";
    dog->speak();

    cout << "Cat says: ";
    cat->speak();

    delete dog;
    delete cat;
}
