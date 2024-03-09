
//code by anika(2202115)


//default arguement
#include <iostream>
using namespace std;

void sum(int p, int q, int z) // declaing user defined function
{
    cout << "Total Sum is: " << p+q+z;
}

int main()
{
    int m,n;
    //case 1
    cout << "Enter values: ";
    cin >> m >> n;

    sum(m,n,5); //5 is default argumnet
    cout << endl << endl;

    //case 2
    int c;
    cout << "Enter the 3rd one: ";
    cin >> c;
    sum(m,n,c);

    return 0;
}
