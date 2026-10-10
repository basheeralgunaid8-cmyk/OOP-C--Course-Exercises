#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _LastName;
    
   

public:

    void  SetFisrtName(string FirstName)
    {
        _FirstName = FirstName;
    }
   
    string FisrttName()
    {
       
        return _FirstName;
    }
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    string  FullName()
    {
        return _FirstName + " " + _LastName;

    }
};
class clsEmployee
{
private :
    string _Name;
    string _ID;
    string _Country;
    short _Age=20;

public:

    void SetName(string Name)
    {
        _Name = Name;
    }

    string GetName()
    {
        return _Name;
    }

    __declspec(property(get = GetName, put = SetName)) string Name;
    void SetID(string ID)
    {
        _ID = ID;
    }
    string GetID()
    {
        return _ID;
    }

   
    __declspec(property(get = GetID, put = SetID))string ID;
    short Age()
    {
        return _Age;
    }
};
int main()
{

    clsPerson Person1;
    Person1.SetFisrtName("BASHEER");
    Person1.SetLastName("ALGUNAID");

    cout << "Fisrt Name : " << Person1.FisrttName() << endl;
    cout << "Last Name : " << Person1.LastName() << endl;
    cout << "Full Name : " << Person1.FullName() << endl;

   
    clsEmployee Employee;

 
    Employee.SetName("SULTAN");
    Employee.SetID("LX4129448");
   
    cout << "Name :" << Employee.GetName() << endl;

    cout << "ID:" << Employee.GetID() << endl;
    cout << "Age :" << Employee.Age() << endl;
    Employee.ID = "LX4129448";
    cout << Employee.ID << endl;
    Employee.Name = "Basheer";
    cout << Employee.Name << endl;
    return 0;
}

