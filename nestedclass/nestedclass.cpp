
#include <iostream>
using namespace std;

//nested classes
class clsPerson
{
public:
    class clsAdress
    {
    private :
        string _Address1;
        string _Address2;
        string _Country;
        string _City;

  

    public:
        clsAdress(string Address1, string Address2, string Country, string city)
        {
            _Address1 = Address1;
            _Address2 = Address2;
            _Country = Country;
            _City = city;
        }
        void Print()
        {
            cout << "Address info:" << endl;

            cout << "Address1   :" << _Address1 << endl;
            cout << "Address2   :" << _Address2 << endl;
            cout << "Country    :" << _Country << endl;
            cout << "City       :" << _City << endl;
        }


    };
    
private :

    string _FullName;
    
public:
    clsAdress Address;
   
    clsPerson(string Address1, string Address2, string Country, string city,string fullName):Address( Address1,  Address2,  Country,  city)
    {
        
        _FullName = fullName;
    }
};
int main()
{
    clsPerson Person("YEMEN", "CHINA", "TAIZ", "SANA'A", "Bahser");
    Person.Address.Print();

    return 0;
}
