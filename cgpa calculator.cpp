
//code by anika(2202115)

#include<iostream>
using namespace std;

class Grade{ //class for data operation
public:
    int i;

    void showcgpa() //user defined function for data initilization
    {
        cout << "Enter the value of total course in this semester: "; //data asking to the user
        cin >> i;
        cout << endl << endl;

        float course[i];
        float credit[i];

        for(int z=0; z<i ; z++)//storing data of cgpa
        {
            cout << "Enter the grade of course " << z+1 << ": ";
            cin >> course[z];
            cout << endl;
            cout << "Enter the credit of course " << z+1 << ": ";
            cin >> credit[z];
            cout << endl << endl;
        }


        float cre=0;
        for (int t=0; t<i; t++)//total credit calculation
        {
            cre = cre + credit[t];
        }


        float point = 0, neat;
        for(int m=0; m<i; m++)//total point calculation
        {
            point = point + (course[m]*credit[m]);
        }

        float result = point / cre; //calculating the total gpa

        cout << "Your CGPA in this semester is : " << result; //printing the total gpa
    }
};

int main()
{
    Grade s1; //object declaration

    s1.showcgpa(); //

    return 0;
}
