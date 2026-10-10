#include<iostream>
using namespace std;


class clsPerson
{
private:
	int _ID = 0;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson()
	{

	}

	clsPerson(int ID1, string FirstName, string LastName, string Email, string phone)
	{
		_ID = ID1;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = phone;

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
class clsEmployee : public clsPerson
{
	string _Department;
	string _Title;
	float _Salary = 0.00;

public:

	void setDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void SetTitle(string title)
	{
		_Title = title;
	}
	string Title()
	{
		return _Title;
	}
	void SetSalary(float salary)
	{
		_Salary = salary;
	}

	float Salary()
	{
		return _Salary;
	}
};
int main()
{

	clsEmployee Employee1;

	Employee1.SetFirstName("BASHEER");
	Employee1.SetLastName("AL-GUNAID");
	Employee1.Print();



	/*clsPerson Person(10, "Mohammed", "Abu-Hadhoud", "my@gamil.com", "00943934954");
	Person.Print();
	Person.SendEmail("HI", "How are you?");
	Person.SendSMS("How are you?");*/
	return 0;
}