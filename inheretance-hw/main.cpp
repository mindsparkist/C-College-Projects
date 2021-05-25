#include <iostream>

using namespace std;
class a
{
public:
    int x =1;
    void f1()
    {
        count<< "It Is F1 And X Is "<< x << endl;
    }
private:
    int y=2;
    void f2()
    {
        count<< "It Is F2 And X Is "<< y << endl;
    }
protected:
    int z=2;
    void f3()
    {
        count<< "It Is F3 And X Is "<< z << endl;
    }
};
class b:public a
{

};
class c:private a
{

};
class c:protected a
{

};

int main()
{

    return 0;
}
