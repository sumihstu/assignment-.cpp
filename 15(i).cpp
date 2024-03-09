
//code by anika(2202115)

#include <iostream>
using namespace std;

class Apple {
public:
    int x;
    Apple(int p) : x(p) {}
};

int main() {
     Apple u(10);
    Apple &p = u;
    cout << "x = " << p.x << endl;
    p.x = 20;
    cout << "x = " << u.x << endl;
    return 0;
}
