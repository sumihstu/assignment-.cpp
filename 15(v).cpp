
//code by anika(2202115)

#include <iostream>
using namespace std;

class world {
public:
    int x;
    world(int val) : x(val) {}
    ~world() { cout << "Destructor called" << endl; }
};
int main() {
    world *obj = new world(10);
    cout << "x = " << obj->x << endl;
    delete obj;
    return 0;
}
