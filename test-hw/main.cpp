#include <iostream>

using namespace std;
class a
{
public:
    int x = 5;
public:
    void sample()
    {
        cout << "Weclome" << endl;
    }
};
class b:public a
{
public:
//protected:
    int sample1()
    {
        return (x);
        //cout << x << endl;
    }
};

int main()
{
    //int s;
    b obj;
    obj.sample();
   // obj.sample1;
    cout << "x Value Is :"<< " " << obj.sample1() << endl;
    return 0;
}
