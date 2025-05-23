#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
float ReadNumber(string Message)
{

    float Number;

    cout << Message;
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int CustomRound(float Number)
{
    int IntPart = int(Number);
    float FractionPart = GetFractionPart(Number);

    int result = 0;
    if (abs(FractionPart) >= 0.5)
    {
        if (Number > 0)
            result = ++IntPart;
        else
            result = --IntPart;
    }
    else
    {
        result = IntPart;
    }
    return result;
}

int main()
{
    float number = ReadNumber("Enter the number: ");

    cout << "My round function is: " << CustomRound(number) << endl;
    cout << "C++ round function is: " << round(number) << endl;
}