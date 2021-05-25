//#include <bits/stdc++.h> // Include For Speed
#include<iostream>
using namespace std;

// Function to print even numbers
void printEvenNumbers(int N)
{

    cout << "Even: ";
    for (int i = 0; i <= N; i++)
    {

        // Numbers that are divisible by 2
        if (i % 2 == 0)
            cout << i << " ";
    }
}

// Function to print odd numbers
void printOddNumbers(int N)
{

    cout << "\n Odd: ";
    for (int i = 0; i <= N; i++)
    {

        // Numbers that are not divisible by 2
        if (i % 2 != 0)
            cout << i << " ";
    }
}

// Driver code
int main()
{

    int N = 0;
    cout << "Please define The Number Which You Wanted To Find The Even Or Odd Up To :";
    cin >> N;
    // Calling Functions
    printEvenNumbers(N);
    printOddNumbers(N);

    return 0;
}
