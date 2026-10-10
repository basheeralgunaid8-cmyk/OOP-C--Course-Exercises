
#include <iostream>
#include<vector>
using namespace std;
class clsValue
{
    int x ;

public:

    clsValue(int value)
    {
        x = value;
    }

    void Print()
    {
        cout << "the value of x=" << x << endl;
    }

};
int main()
{
    vector<clsValue>vclass;

    short number = 5;

    for (int i = 0; i < number; i++)
    {
        vclass.push_back(clsValue(i));
    }
   
    for (int i = 0; i < number; i++)
    {
        vclass[i].Print();
    }
}

