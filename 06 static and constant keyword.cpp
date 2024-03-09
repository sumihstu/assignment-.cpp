
//code by anika(2202115)

//static and consant variables in c++
#include<iostream>

using namespace std;
int main()
{
    const int r = 15;
    // here r is constant and value of a is unchangable
    cout << r << endl;
    cout << endl;

    for(int i=1;i<r;i++)
    {
        static int c = 0; //this keyword is keep static code in first loop
        cout << c << endl;
        c++;
    }

    return 0;
}
