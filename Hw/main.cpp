// a programe For Adding two Complex numbers

#include<iostream>
using namespace std;
class comp
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout <<"A :"<<a<< " B :"<<b << endl;
    }
    comp add(comp j)
    {
        comp temp;
        temp.a = a+j.a;
        temp.b = b+j.b;
        return (temp);

    }
};

int main()
{
    comp obj1,obj2,obj3;
    obj1.setData(4,5);
    obj2.setData(7,8);
    obj3 = obj1.add(obj2);
    obj1.showdata();
    obj2.showdata();
    obj3.showdata();
    return 0;
}
