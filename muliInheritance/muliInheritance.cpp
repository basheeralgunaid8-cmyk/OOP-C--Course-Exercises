#include <iostream>
using namespace  std;

class clsPerson
{
public :
   
    virtual void Print()
    {
        cout << "I am a person" << endl;
}
};

class clsEmployee :public clsPerson
{
public:
    void Print()
    {
        cout << "I am an employee" << endl;
    }

};

class clsStudent:public clsPerson
{
public:
    void Print()
    {
        cout << "I am a student" << endl;
    }
};
int main()
{
    
    clsEmployee employee1;
    clsStudent student;
   /* employee1.Print();
    student.Print();*/


    clsPerson* Person1 = &employee1;
    clsPerson* Person2 = &student;

    Person1->Print();
    Person2->Print();

    return 0;
}

