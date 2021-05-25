// C++ program to print initials of a name
//#include <bits/stdc++.h> Can Be Also Used
#include<iostream>
using namespace std;

void printInitials(const string& name)
{
	if (name.length() == 0)
		return;

	// Since touuper() returns int, we do typecasting
	cout << (char)toupper(name[0]);

	// Traverse rest of the string and print the
	// characters after spaces.
	for (int i = 1; i < name.length() - 1; i++)
		if (name[i] == ' ')
			cout << " " << (char)toupper(name[i + 1]);
}

// Driver code
int main()
{
    string name;
    cout << "Please Enter Your Name :";
    cin >>name; // Space Problem
	//string name = "Shuvradip Chakraborty";
	printInitials(name);
	return 0;
}
