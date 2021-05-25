#include <iostream>

using namespace std;
class m
{
public:
    int x = 5;
protected:
    int y = 6;
private:
    int z= 7;
};
class n:public m
{
public:
    void showData1()
    {
        cout << "The Value Of Public Inheritance Is :" << x << endl;
        cout << "The Value Of Protected Inheritance Is :" << y << endl;
        //cout << "The Value Of Private Inheritance Is :" << z << endl; //| Error Cant Print Private Variable
    }
};
class o:private m
{
public:
    void showData2()
    {
        cout << "The Value Of Public Inheritance Is :" << x << endl;
        cout << "The Value Of Protected Inheritance Is :" << y << endl;
       // cout << "The Value Of Private Inheritance Is :" << z << endl; //| Error Cant Print Private Variable
    }

};
class p:protected m
{
public:
    void showData3()
    {
        cout << "The Value Of Public Inheritance Is :" << x << endl;
        cout << "The Value Of Protected Inheritance Is :" << y << endl;
        //cout << "The Value Of Private Inheritance Is :" << z << endl; //| Error Cant Print Private Variable
    }
};

int main()
{
    m obj1;
    obj1.showData1();
    return 0;
}
