
//code by anika(2202115)

#include<iostream>
using namespace std;

class Factorial{
    private:

    public:
        int factorial(int n)
        {
            if (n==0 || n==1)
                return 1;
            else
                return n*factorial(n-1);
        }
        Factorial(int f)
        {
            cout << factorial(f) << endl;
        }

};


int main()
{
    Factorial num(5);

    return 0;
}
