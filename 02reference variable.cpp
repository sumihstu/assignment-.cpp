//code by anika(2202115)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int z=15;
    cout << z << endl;//before the reference

    int &r=z;//r variable refers the pointer to z; now z = r
    r=10;
    cout << &r << endl;
    cout << z << endl;


    return 0;
}
