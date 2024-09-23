#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    string name;
    int age,sallery;
    
    void display()
    {
        cout << " name : " << name << " age : " << age << " sallery: "<< sallery << endl; 
    }
};

/*
public: If a derived class is declared in public mode,
        then the members of the base class are inherited by the derived class just as they are.

private: In this case, all the members of the base class become private members in the derived class.

protected: The public members of the base class become protected members in the derived class.

*/

class Manager: public Employee
{
public:
    string department;
    void display_derived()
    {
        cout << " name : " << name << " age : " << age << " sallery: "<< sallery << " department: " << department << endl; 
    }

};

int main() 
{
    Employee em;
    em.name = "name";
    em.age = 123;
    em.sallery = 123456;
    em.display();

    Manager man;
    man.name = "man";
    man.age = 123;
    man.sallery = 123456;
    man.department = "manager";
    man.display();
    man.display_derived();

 
    return 0;
}