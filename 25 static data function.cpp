
//code by anika(2202115)
#include<iostream>
using namespace std;

class Employee{
    private:
        int salary;
        static int count; // static member data declaration

    public:
        void setSalary(int n)
        {
            salary = n;
        }

        int getSalary()
        {
            return salary;
        }

        static int functionCount() // static member function
        {
            cout << "This is: " << count << " no count" << endl << endl;
            count++;
        }
};

int Employee :: count=1; // define count = 1

int main()
{
    Employee one, two;

    one.setSalary(10000);
    cout << "your salary is: " << one.getSalary() << endl;
    Employee::functionCount();

    two.setSalary(20000);
    cout << "your salary is: " << two.getSalary() << endl;
    Employee::functionCount();

    return 0;
}
