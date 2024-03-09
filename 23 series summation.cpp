
//code by anika(2202115)

#include<iostream>
using namespace std;

class Summation{
    private:
    public:

        Summation(int i, int j)
        {
            int a, sum = 0;
            if(a<j){
                for(a=i;a<j;a++)
                {
                    sum = sum +a;
                }
                cout << sum;
            }

            else{
                cout << "Second Number must be larger !!!";
            }


        }
};

int main()
{
    Summation series1(0,11);

    return 0;
}
