//code by anika(2202115)
#include<iostream>

int var = 15;

using namespace std;
int main()
{
    int var = 15;
    cout << "Global Variable: " << ::var << endl;//using scope resolution operator for calling global variable
    cout << "local Variable: " << var << endl;

    return 0;
}
