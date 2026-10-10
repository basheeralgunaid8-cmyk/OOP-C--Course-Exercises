#include <iostream>
using namespace std;

class clsPerson
{
protected:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _phone;

public:

    clsPerson(int ID,string FirstName,string LastName ,string Email,string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _phone = Phone;
    }
    int ID()
    {
        return _ID;
    }
    void SetFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    string FirstName()
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
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    void SetEmail(string email)
    {
        _Email = email;
    }

    string Email()
    {
        return _Email;
    }

    void SetPhone(string phone)
    {
        _phone = phone;
    }

    string Phone()
    {
        return _phone;

    }
    void Print()
    {
        cout << "\nInfo\n";
        cout << "____________________________" << endl;
        cout << "ID        :" << ID() << endl;
        cout << "First Name: " << FirstName() << endl;
        cout << "LastName  :" << LastName() << endl;
        cout << "Full Name :" << FullName() << endl;
        cout << "Email     :" << Email() << endl;
        cout << "Phone     :" << Phone() << endl;

    }
    void SendEmail(string subject, string body)
    {
        cout << "\nThe following message sent successfully to email :" << Email() << endl;
        cout << "Subject : " << subject << endl;
        cout << "Body    : " << body << endl;

    }
    void SendSMS(string message)
    {
        cout << "\nThe following SMS sent successfully to phone :" << Phone() << endl;
        cout << "Subject : " << message << endl;
    }
};

class clsEmployee:public clsPerson
{
    string _Title;
    string _Department;
    float _Salary = 0.0;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string title, string department, float salary) :
        clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = title;
        _Department = department;
        _Salary = salary;
    }

    void SetTitle(string title1)
    {
        _Title = title1;
    }
    string Title()
    {
        return _Title;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }
    
    string Department()
    {
        return _Department;

    }

    void SetSalary(float salary)
    {
        _Salary = salary;
    }
    float Salary()
    {
        return _Salary;
    }

    void Print()
    {
       
        cout << "\nInfo\n";
        cout << "____________________________" << endl;
        cout << "ID        :" << _ID << endl;
        cout << "First Name: " << FirstName() << endl;
        cout << "LastName  :" << LastName() << endl;
        cout << "Full Name :" << FullName() << endl;
        cout << "Email     :" << Email() << endl;
        cout << "Phone     :" << Phone() << endl;
        cout << "Department:" << Department() << endl;
        cout << "Title     :" << Title() << endl;
        cout << "Salary    :" << Salary() << endl;
       
    }
};

class clsDeveloper:public clsEmployee
{
    string _MainLanguage;

public:

    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string title, string department, float salary, string MainLanguage) :clsEmployee(ID, FirstName, LastName, Email, Phone, title, department, salary)
    {
        _MainLanguage = MainLanguage;
    }

    void SetLanguage(string language)
    {
        _MainLanguage = language;
    }
    string MainLanguage()
    {
        return _MainLanguage;
    }

    void Print()
    {

        cout << "\nInfo\n";
        cout << "____________________________" << endl;
        cout << "ID        :" << _ID << endl;
        cout << "First Name: " << FirstName() << endl;
        cout << "LastName  :" << LastName() << endl;
        cout << "Full Name :" << FullName() << endl;
        cout << "Email     :" << Email() << endl;
        cout << "Phone     :" << Phone() << endl;
        cout << "Department:" << Department() << endl;
        cout << "Title     :" << Title() << endl;
        cout << "Salary    :" << Salary() << endl;
        cout << "Main Programming Language : " << _MainLanguage << endl;
    }
};


int main()
{


    clsDeveloper Developer(10, "BASHEER", "AL-GUNAID", "bashyer@gmail.com", "131234131", "DATA STRUCUTER", "CS", 55000,"C++ Language");
    Developer.Print();

    
    return 0;
}

