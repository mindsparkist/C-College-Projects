#include <iostream>

using namespace std;
int max(int x,int y)
{
    if (x<y)
    {
        cout << y << endl;
    }
    else if(y<x)
    {
        cout << x << endl;
    }
    else if (x == y)
    {
        cout << "Both Numbers Are The Same" << endl;
    }
}

int main()
{
    int x,y;
    cout << "Enter The First Number :" << endl;
    cin >> x;
    cout << "Enter The Second Number :" << endl;
    cin >> y;
    max(x,y);
    return 0;
}
