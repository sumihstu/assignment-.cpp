
//code by anika(2202115)


//call by value for user defined functions
#include<iostream>
using namespace std;

int add(int m, int n) // user defined function
{
    int sum = m+n;
    return sum;
}
int main()
{
    int m,n; //declaring variables
    cout << "Enter 2 Positive Number: ";
    cin >> m >> n;
    cout << endl;

    int result = add(m,n); //call by value
    cout << "Summation is: " << result << endl;

    return 0;
}
