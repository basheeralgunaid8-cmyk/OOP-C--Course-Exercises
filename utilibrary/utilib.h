#pragma once
#include <iostream>   
#include <string>     
#include <cstdlib>    
#include <ctime>      
#include"clsDate.h"
using namespace std;
class utilib
{
private :
    int _From;
    int _To;

public:

    utilib()
    {

    }
    utilib(int from,int to)
    {
        _From = from;
        _To = to;
    }
    void SetFrom(int From)
    {
        _From = From;

    }
    int GetFrom()
    {
        return _From;
    }
    void SetTo(int To)
    {
        _To = To;

    }
    int GetTO()
    {
        return _To;
    }
    __declspec(property(get = GetFrom, put = SetFrom)) int From;
    __declspec(property(get = GetTO, put = SetTo)) int To;
    static  int RandomNumber(int From, int To)
    {

        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }
    enum enCharType {
        SamallLetter = 1,
        CapitalLetter = 2,
        SpecialCharacter = 3,
        Digit = 4,
        Mix=5
    };
    static char  GetRandomCharacters(enCharType CharType)
    {
        switch (CharType)
        {
        case enCharType::SamallLetter:
        {

            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {

            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter:
        {

            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {

            return char(RandomNumber(47, 57));
            break;
        }
        case enCharType::Mix:
        {
            if (rand() % 2 == 0)   // 50% chance
                return char(RandomNumber(48, 57));   // '0'–'9'
            else
                return char(RandomNumber(97, 122));  // 'a'–'z'
        }

        }

        return '\0';
    }
    static  string GenerateWord(enCharType CharType, short length)
    {

        string word;
        for (int i = 1; i <= length; i++)
        {

            word = word + GetRandomCharacters(CharType);
        }

        return word;
    }
    static  string GenerateKey()
    {
        string key = "";

        key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord(enCharType::SamallLetter, 4);
        key = key + GenerateWord(enCharType::Mix, 4);

        return key;
    }
    static void GenerateKeys(int NumberOfKeys)
    {
        for (int i = 1; i <= NumberOfKeys; i++)
        {
            cout << "key [" << i << "] : ";
            cout << GenerateKey() << endl;

        }

    }
    static void Srand()
    {
        srand((unsigned)time(NULL));

    }
    static void   Swap(int &x, int& y)
    {
        int temp = x;
        x = y;
        y = temp;
        cout << x << "  " << y << endl;

    }
    static void Swap(string S1, string S2)
    {
        string  temp = S1;
        S1 = S2;
        S2 = temp;
        cout << S1 << "  " << S2 << endl;
    }
    static void Swap(double& num1, double &num2)
    {
        double temp = num1;
        num1 = num2;
        num2 = temp;
        cout << num1 << "  " << num2 << endl;
    }
    static void Swap(clsDate &d1, clsDate& d2)
    {
        clsDate Temp = d1;
        d1 = d2;
        d2 = Temp;
    }
    static void ShuffleArray(int arr[], int length)
    {
        Srand();   // Seed random generator

        for (int i = length - 1; i > 0; i--)
        {
            int j = rand() % (i + 1);   // random index from 0 to i

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    static void ShuffleArray(string S1[], int length)
    {
       

        for (int i = length - 1; i > 0; i--)
        {
            int j = rand() % (i + 1);   // random index from 0 to i

            string temp = S1[i];
            S1[i] = S1[j];
            S1[j] = temp;
        }
    }
    static void FillArrayWithRandomNumbers(int arr[], short length, short From, short To)
    {

        for (int i = 0; i < length; i++)
        {
            arr[i] = RandomNumber(From, To);
        }

    }
    static void FillArrayWithRandomWords(string S2[], short length, enCharType CharType, short length2)
    {
        for (int i = 0; i < length; i++)
        {
            S2 [i] = GenerateWord(CharType, length2);
        }
    }
    static void FillArrayWithRandomKeys(string S3[], short length, enCharType CharType)
    {

        for (int i = 0; i < length; i++)
        {
            S3[i] = GenerateKey();
        }
    }
    static string  Tabs(short NumberOfTabs)
    {
        string t = "";

        for (int i = 1; i < NumberOfTabs; i++)
        {
            t = t + "\t";
            cout << t;
        }
        return t;

    }
    static string  EncryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] + EncryptionKey);

        }

        return Text;

    }
    static string  DecryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] - EncryptionKey);

        }
        return Text;

    }
    static string NumberToText(int Number)
    {

        if (Number == 0)
        {
            return "";
        }

        if (Number >= 1 && Number <= 19)
        {
            string arr[] = { "", "One","Two","Three","Four","Five","Six","Seven",
        "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
          "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };

            return  arr[Number] + " ";

        }

        if (Number >= 20 && Number <= 99)
        {
            string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
            return  arr[Number / 10] + " " + NumberToText(Number % 10);
        }

        if (Number >= 100 && Number <= 199)
        {
            return  "One Hundred " + NumberToText(Number % 100);
        }

        if (Number >= 200 && Number <= 999)
        {
            return   NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100);
        }

        if (Number >= 1000 && Number <= 1999)
        {
            return  "One Thousand " + NumberToText(Number % 1000);
        }

        if (Number >= 2000 && Number <= 999999)
        {
            return   NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);
        }

        if (Number >= 1000000 && Number <= 1999999)
        {
            return  "One Million " + NumberToText(Number % 1000000);
        }

        if (Number >= 2000000 && Number <= 999999999)
        {
            return   NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
        }

        if (Number >= 1000000000 && Number <= 1999999999)
        {
            return  "One Billion " + NumberToText(Number % 1000000000);
        }
        else
        {
            return   NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
        }


    }


};

