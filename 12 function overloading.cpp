
//code by anika(2202115)



//function overloading
#include <iostream>
using namespace std;

void sum(int r, int p) //function with two parameters
{
    cout << "Total Sum is: " << r+p;
}

void sum(int r, int p, int m) //function with three parameters
{
    cout << "Total Sum is: " << r+p+m;
}

int main()
{
    sum(5,10); // calling two parametered function with same name

    cout << endl;

    sum(5,10,15); // calling three parametered function with same name


    return 0;
}
