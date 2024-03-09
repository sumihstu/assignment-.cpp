
//code by anika(2202115)


#include<iostream>
using namespace std;
class S{
public:
    void swapp(int *a,int *b){
int t = *a;
*a = *b;
*b = t;
}
    };
int main()
{
    S u;
    int m = 9;
    int n = 10;
    u.swapp(&m,&n);
    cout<<"The value of m = "<<m<<"\nThe value of n = "<<n<<endl;
    return 0;
}
