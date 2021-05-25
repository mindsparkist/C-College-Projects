#include <iostream>

using namespace std;
class a
{
protected:
    int o = 5;
protected:
    setData(int q)
    {
        o = q;
        cout << "o is "<< o << endl;
    }
};
class b:public a
{
public:
   /* setValue(int w)
    {
        setData(w);
    }
    */
};
class c:public b{
    public:
    void printData(){
    cout << "o is "<< o << endl;
    }

};


int main()
{
    b obj;
    obj.setValue(5);
    c obj2;
    obj2.printData();

    return 0;
}
