#include "q2.hpp"
dayType::dayType(const string& day) {
    if(day == "monday") {
        this->day = DAY::monday;
    }
    else if(day == "tuesday") {
        this->day = DAY::tuesday;
    }
    else if(day == "wednesday") {
        this->day = DAY::wednesday;
    }
    else if(day == "thursday") {
        this->day = DAY::thursday;
    }
    else if(day == "friday") {
        this->day = DAY::friday;
    }
    else if(day == "saturday") {
        this->day = DAY::saturday;
    }
    else if(day == "sunday") {
        this->day = DAY::sunday;
    }
    else {
        cout << "Invalid day" << endl;
    }
}
void dayType::printDay() const {
    cout << "The day is: " << days[day] << endl;
}
string dayType::getDay() const {
    return days[day];
}
string dayType::nextDay() const {
    return days[(day + 1) % 7];
}
string dayType::previousDay() const {
    return days[(day - 1 + 7) % 7];
}
string dayType::returnAddedDays(int n) const {
    return days[(day + n) % 7];
}
int main() {
    cout << "Enter the day of the week: ";
    string day;
    cin >> day;
    dayType d(day);
    cout << "The day is: " << d.getDay() << endl;
    cout << "The next day is: " << d.nextDay() << endl;
    cout << "The previous day is: " << d.previousDay() << endl;
    cout << "Enter the number of days to add: ";
    int n;
    cin >> n;
    cout << "The day after " << n << " days is: " << d.returnAddedDays(n) << endl;
    return 0;
}
