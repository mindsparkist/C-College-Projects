#include<iostream>
using namespace std;
void swapVariable(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;

}
int main()
{
    int x,y;
    cout << "Please Enter The First Number You Want To Swap" << endl;
    cin >>x;
    cout << "Please Enter The Second Number You Want To Swap" << endl;
    cin >>y;
    cout << "Before Swapping Values Are :" << x << " " << y <<endl;
    swapVariable(&x,&y);
    cout << "After Swapping Values Are :" << x<< " " << y <<endl;
    return 0;
}
