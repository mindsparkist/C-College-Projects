#include <iostream>

using namespace std;
class a
{
    friend class c;
    int x;
public:
    a(int b)
    {
        x=b;
    }

};
class c
{
public:
    void showData(a obj)
    {
        cout<<"x Value Is:"<<obj.x;
    }

};

int main()
{
    a obj1(7);
    c obj2;
    obj2.showData(obj1);



    //cout << "Hello world!" << endl;
    return 0;
}
