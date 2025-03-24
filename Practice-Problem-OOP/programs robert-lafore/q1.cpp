#include <iostream>
using namespace std;
class Int {
    int value;
public:
    Int(int value = 0) : value(value) {}

    Int addTwo(const Int& n) {
        return Int(value + n.value);
    }
    void display() const {
        cout << "The value is: " << value << endl;
    }
};
int main() {
    Int n1(10);
    n1.display();
    Int n2(20);
    n2.display();
    Int n3 = n1.addTwo(n2);
    n3.display();
    return 0;
}