#include <iostream>
#include <iomanip>
using namespace std;
class Vehicle {
    string vehicleId;
    string model;
    float speed;
public:
    Vehicle(string vehicleId, string model, float speed) {
        this->vehicleId = vehicleId;
        this->model = model;
        this->speed = speed;
    }
    void displayDetails() const {
        cout << "Vehicle ID: " << vehicleId << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << endl;
    }
    void accelerate(float acceleration) {
        speed += acceleration;
    }
};
int main() {
    const Vehicle v1("V001", "Toyota", 100.0);
    Vehicle v2("V002", "Ford", 110.0);
    v1.displayDetails();
    cout << setfill('-') << setw(40) << "" << endl;
    v2.displayDetails();
    // v1.accelerate(20.0); generates error because v1 is const
    v2.accelerate(30.0);
    cout << "After acceleration:" << endl;
    v1.displayDetails();
    cout << setfill('-') << setw(40) << "" << endl;
    v2.displayDetails();
    return 0;
}