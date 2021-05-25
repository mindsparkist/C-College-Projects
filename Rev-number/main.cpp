#include<iostream>
using namespace std;
// Function declaration
int reversenumber(int inptnum);
int main()
{
    int inputNumber,revnum;
    cout <<"Enter The Number You Want To Define";
    cin >>inputNumber;
    revnum = reversenumber(inputNumber);
    cout << revnum << endl;

    return 0;
}
// Function definition
int reversenumber(int inptnum)
{
    int lastDigit,reversedNumber = 0;
    while(inptnum != 0)
    {
        lastDigit = inptnum%10; // Stripping Last Digit
        reversedNumber = (reversedNumber*10) + lastDigit;
        inptnum /=10;
    }
    return reversedNumber;
}
