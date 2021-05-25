#include<iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter A Number To Check If It Is Leap Year";
    cin >> y;
    (y%4)? cout << y << " Is Not Leap Year" :(y%100)?cout << y << " Is Leap Year But Not Century Year":(y%400)?cout << y << " is Not Leap Year":cout << y << " is Leap Year And A Century Year ";
    return 0;
}
