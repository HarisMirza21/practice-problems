#include <iostream>
using namespace std;
class dayType {
    enum DAY {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    DAY day;
    string days[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
public:
    dayType(const string& day);
    void printDay() const;
    string getDay() const;
    string nextDay() const;
    string previousDay() const;
    string returnAddedDays(int n) const;
};