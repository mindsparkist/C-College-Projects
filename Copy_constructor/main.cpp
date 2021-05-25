#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    int mark;
public:
    student(int m,int n)
    {
        roll = m;
        mark = n;

    }
    student(student &t);
    void show_data()
    {
        cout<<"\n Roll No:"<<roll;
        cout<<"\n Mark :"<<mark;
    }

};
student :: student(student &t)
{
    roll =t.roll;
    mark = t.mark;
}
int main()
{
    cout<<"\n Parameterized constructor Output r \n";
    student r(60,10);
    r.show_data();
    cout<<"\n Copy constructor Output r \n";
    student stu(r);
    stu.show_data();
    return 0;



}
