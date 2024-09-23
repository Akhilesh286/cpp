#include <iostream>
#include <string>

using namespace std;

class Person 
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    void display()
    {
        cout << name << age << endl;
    }
};

class Profecor : protected Person
{
public:
    void display()
    {
        cout << name << age << endl;
    }
    
    void set_data(string n,int a)
    {
        name = n;
        age = a;
    }
};

class Visitor : private Person
{
public:
    void display()
    {
        cout << name << age << endl;
    }

    void set_data(string n,int a)
    {
        name = n;
        age = a;
    }
};

int main() 
{
    Student s1;
    Profecor p1;
    Visitor v1;

    s1.name = "name";
    s1.age = 12;
    s1.display();

    p1.set_data("name",16);
    p1.display();
    
    v1.set_data("name",20);
    v1.display();


    return 0;
}