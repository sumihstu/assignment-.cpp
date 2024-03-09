
//code by anika(2202115)

#include<iostream>
using namespace std;

class text //class
{
    private:
    int m =12;//private variable

    public:
    void display()//user defined function
    {
        cout << "Enterd value is: " << m << endl;
    }
};

int main()
{
    text m;//object of class text
    m.display();

    return 0;
}
