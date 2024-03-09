
//code by anika(2202115)

#include<iostream>
using namespace std;
class m
{
public:
     int *x;
     int p;
     void pointer(void)
     {
         p=7;
         x=&p;
     }
    void display(void)
    {
    cout<<"the value pointed by x : "<<*x<<endl;
    cout<<"Address stored at x : "<<x<<endl;
    cout<<"Address of x : "<<&x<<endl;
    }
};
int main()
{
    m y;
    y.pointer();
    y.display();
    return 0;
}
