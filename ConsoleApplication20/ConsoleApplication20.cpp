//Make a class “Animal” with the abstract method speak()
//Make classes “dog” and “cat” that inherit from animal.
//Override the speak method
//Make the objects and call speak from main

#include <iostream>
using namespace std;

class Animal 
{
public:
    virtual void speak()
    {
        cout << "Animal sound: " << endl;
    }
};

class Dog : public Animal 
{
public:
    void speak() override 
    {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal 
{
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