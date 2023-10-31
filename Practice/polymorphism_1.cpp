// Polymmorphism
/* Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance. */

#include <iostream>
using namespace std;

// Base Class
class Animal
{
    public:
        void animalSound()
        {
            cout<<"THe animal makes a sound\n";
        }
};

// Derived class
class Pig : public Animal
{
    public:
        void animalSound()
        {
            cout<<"The pig says: wee wee\n";
        }
};

// Derived class
class Dog : public Animal
{
    public:
        void animalSound()
        {
            cout<<"The dog says: bow wow\n";
        }
};

int main()
{
    Animal obj1;
    Pig obj2;
    Dog obj3;

    obj1.animalSound();
    obj2.animalSound();
    obj3.animalSound();
    return 0;
}