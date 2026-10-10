#include <iostream>
#include"utilib.h"
#include"clsDate.h"
using namespace std;

int main()
{
    
    utilib::Srand();
    utilib utiLibrary;


   
    cout << utiLibrary.RandomNumber(1, 10) << endl;
    cout << endl<< utiLibrary.GetRandomCharacters(utilib::enCharType::CapitalLetter) << endl;
    utiLibrary.GenerateKeys(10);

    int x = 10, y = 20;
    cout << endl<<"x " << " " << "y" << endl;
    utilib::Swap(x, y);
    cout << x << " " << y << endl;

    //swap string
    string S1 = "Ali";
    string S2 = "Salah";
    cout << endl<<"S1 " <<"   " << "S2" << endl;
    utilib::Swap(S1, S2);
    cout <<  S1  << " " << S2  << endl;

    //swap double
    double num1 = 10.23, num2 = 20.32;
    cout << endl<<"num1 " << "  " << "num2 " << endl;
    utilib::Swap(num1, num2);
    cout <<  num1  << "  " << num2  << endl;
    cout << endl;
    //swap Date
    clsDate d1(1, 2, 2022),d2(1,1,2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    utilib::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    cout << endl;

    //Shuffle Array of integers
    int Array[] = { 1,2,3,4,5 };
    utilib::ShuffleArray(Array, 5);
    cout << "\nArray after Shuffle：\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Array[i] << endl;
    }

    //Shuffle array of string 

    string Array1[] = { "Ali","Salah","Basheer","Hadi","Omer" };
    utilib::ShuffleArray(Array1, 5);
    cout << "\nArray after Shuffle\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Array1[i] << endl;
    }

    int Arr[5];
    utilib::FillArrayWithRandomNumbers(Arr, 5, 20, 50);
    cout << "Array after filling : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << endl;
    }

    string Array4[5];
    utilib::FillArrayWithRandomWords(Array4, 5, utilib::Mix, 8);
    cout << "\nArray after filling : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << Array4[i] << endl;
    }
    
    string Array5[5];
    utilib::FillArrayWithRandomKeys(Array5, 5, utilib::Mix);
    cout << "\nArray after filling : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << Array5[i] << endl;
    }

    return 0;
}
