
//code by anika(2202115)

#include<iostream>
using namespace std;

class prime{
    public:
        prime(int num)
        {
            if(num == 1)
            {
                cout << num << " is not a prime number." << endl;
                return;
            }

            bool isPrime = true;

            for(int i=2; i <= (num-1) ; i++)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime)
            {
                cout << num << " is a prime number." << endl << endl;
            }
            else
                cout << num << " is not a prime number" << endl << endl;
        }
};

int main()
{
    int n;

    while(1){
        cout << "Enter a value: ";
        cin >> n;

    prime num(n);

    }

    return 0;
}
