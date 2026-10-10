#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _Result = 0;
    string _LastOperation = "Clear";
    float _LastNumber = 0;
    float _PreviousResult = 0;
    bool Is_Zero(float Num)
    {
        return (Num == 0);
    }
public:

    
    void Add(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Num;
        
    }
    void  Substraction(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Substraction";
        _Result -= Num;
    }
    void  Divide(float Num)
    {
        _LastNumber = Num;
        if (Is_Zero(Num))
        {
            Num = 1;
        }
        
        _PreviousResult = _Result;
        _LastOperation = "Substraction";
        _Result /= Num;
    }
    void  Multiple(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Multiple";
        _Result *= Num;
    }

    float GetFinalResult()
    {
        return _Result;
    }

    void Clear()
    {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result= 0;

    }
    void CancelLastOperation()
    {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
        _Result = _PreviousResult;
    }

    void PrintResult()
    {
        cout << "Result ";
        cout << "After " << _LastOperation << " " <<
            _LastNumber << " is: " << _Result << "\n";
    }

};
int main()
{
    clsCalculator Calculator;
    Calculator.Clear();
    Calculator.Add(10);
    Calculator.PrintResult();
    Calculator.Add(100);
    Calculator.PrintResult();
    Calculator.Substraction(20);
    Calculator.PrintResult();
    Calculator.Divide(0);
    Calculator.PrintResult();

    return 0;

}

