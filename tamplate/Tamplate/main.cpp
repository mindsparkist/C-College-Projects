#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
    class show
    {
        T a,b;
    public:
       void setdata(T p,T q){
          a=p;
          b=q;
        }
        void showData(){
        cout<<"Your Data Is "<< " a " << a << " B " << b <<endl;

        }


    };

int main()
{
    show <int> obj1;
    obj1.setdata(10,20);
    obj1.showData();
    return 0;
}
