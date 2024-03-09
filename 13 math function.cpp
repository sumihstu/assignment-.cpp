
//code by anika(2202115)


//math function
#include <iostream>
#include <cmath> //math library function

using namespace std;

int main() {
    double number = 16.0; // variable declaration
    double square = pow(number,2);
    double squareRoot = sqrt(number);

    // Calculate the square using the pow() function from the cmath library
    cout << "Power of " << number << " is: " << square << endl;

    // Calculate the square root using the sqrt() function from the cmath library
    cout << "Square root of " << number << " is: " << squareRoot << endl;

    return 0;
}
