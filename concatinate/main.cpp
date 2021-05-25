#include <iostream>

using namespace std;

int main()
{
    string f_name,l_name;
    cout << "FirstName" << endl;
    cin >> f_name;
    int len = f_name.length();

    // declaring character array
    char char_array[len + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, f_name.c_str());

    // cout << "LastName" << endl;
    //cin >> l_name;
    //cout << f_name << l_name << endl;

    return 0;
}
