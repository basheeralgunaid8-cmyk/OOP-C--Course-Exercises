#include<iostream>
using namespace std;


class clsPerson
{
private:
	int _ID=0;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
	string _Deprtment;
	string _Title;
	int _Salary;


public:

	clsPerson(int ID1, string FirstName, string LastName, string Email, string phone,int salary ,string deprtment,string title)
	{
		_ID=ID1;
	    _FirstName= FirstName;
	    _LastName= LastName;
	    _Email= Email;
		_Phone= phone;
		_Deprtment = deprtment;
		_Salary = salary;
		_Title = title;
	}
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;

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
	void SetEmail(string Email)
	{
		_Email = Email;
	}
	string Email()
	{
		return _Email;
	}
	void SetPhone(string phone)
	{
		_Phone = phone;
	}
    string Phone()
	{
		return _Phone;
	}
	int ID()
	{
		return _ID;
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
		cout << "Salary    :" << _Salary << endl;
		cout << "Title     :" << _Title << endl;
		cout << "Depertment:" << _Deprtment << endl;
		cout << "____________________________" << endl;
	}
	void SendEmail(string subject, string body)
	{
		cout << "\nThe following message sent successfully to email :" << Email() << endl;
		cout <<"Subject : "<< subject << endl;
		cout <<"Body    : " << body << endl;

	}
	void SendSMS(string message)
	{
		cout << "\nThe following SMS sent successfully to phone :" << Phone() << endl;
		cout << "Subject : " << message << endl;
    }
};
int main()
{
	clsPerson Person(10, "Mohammed", "Abu-Hadhoud", "my@gamil.com", "00943934954",5000,"Computer Science","Salah Shanb");
	Person.Print();
	Person.SendEmail("HI", "How are you?");
	Person.SendSMS("How are you?");
	return 0;
}