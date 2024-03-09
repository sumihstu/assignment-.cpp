
//code by anika(2202115)
#include<iostream>
using namespace std;

class Square{
    float a;
    float circum;
    float area;

    public:
        void setData(float n)
        {
            a = n;
            circum = 4*a;
            area = a*a;
        }

        friend void show(Square);
};

void show(Square one)
{
    cout << one.circum << endl;
    cout << one.area << endl;
}

int main()
{
    Square one;
    one.setData(5);

    show(one);

    return 0;
}
