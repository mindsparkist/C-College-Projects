#include<iostream>
using namespace std;

int main()
{
    char t = 'f';
    char *t1;
    char **t2;
    cout<<t;    //this causes an error, cout was not declared in this scope
    return 0;
}
