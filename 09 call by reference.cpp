
//code by anika(2202115)


//call by reference for user defined functions
#include<iostream>
using namespace std;

void swap(int *m, int *n) //user defined function
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    int x,y; //declaring variables
    cout << "Enter 2 Positive Number: ";
    cin >> x >> y;
    cout << endl;
    cout << "The value of x: " << x << " and the value of y: " << y << endl;
    cout << endl;

    swap(&x,&y); //call by reference pointers
    cout << "The value of x: " << x << " and the value of y: " << y << endl;


    return 0;
}
