
//code by anika(2202115)

#include<iostream>
using namespace std;

class GPA{
    private:
        string grade;
    public:
        GPA(int mark)
        {
            if(mark>=80 && mark<=100)
            {
                grade="A+";
            } else if(mark>=70 && mark<=79)
            {
                grade="A";
            } else if(mark>=60 && mark<=69)
            {
                grade="A-";
            } else if(mark>=50 && mark<=59)
            {
                grade="B";
            } else if(mark>=40 && mark<=49)
            {
                grade="F";
            }
        }

        void display()
        {
            cout << "Your grade is: " << grade << endl;
        }
};

int main()
{
    int mar;
    cout << "Enter your mark: ";
    cin >> mar;

    GPA s1(mar);
    s1.display();

    return 0;
}
