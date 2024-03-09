
//code by anika(2202115)

#include<iostream>
using namespace std;
class mango
{
public:
     int d = 26;
     void display(void);
};
void mango :: display()
{
        cout<<"The value of d in inner block = "<<d<<endl;
}


int main()
{
    mango y;
    y.display();
    return 0;
}
