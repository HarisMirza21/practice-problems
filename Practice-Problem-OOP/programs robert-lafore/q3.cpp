#include <iostream>
using namespace std;

class Time {
    int hrs, mins, secs;
public:
    Time(int h = 0, int m = 0, int s = 0) : hrs(h), mins(m), secs(s) {}
    void display() const {
        cout << hrs << ":" << mins << ":" << secs << endl;
    }
    Time add(const Time& t1) const {
        return Time(t1.hrs + hrs, t1.mins + mins, t1.secs + secs);
    }
};

int main() {
    Time t1(10, 20, 30);
    Time t2(1, 2, 3);
    Time t3 = t1.add(t2);
    t3.display();
    return 0;
}