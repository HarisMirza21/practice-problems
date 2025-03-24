#include <iostream>
using namespace std;
class tollBooth {
    unsigned int totalCars;
    double totalMoney;
public:
    tollBooth() : totalCars(0), totalMoney(0) {}
    void payingCar() {
        totalCars++;
        totalMoney += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total money: " << totalMoney << endl;
    }
};
int main() {
    tollBooth booth;
    for(int i=0;i<10;i++){
        if(i%3==0){
            booth.nopayCar();
        }
        else{
            booth.payingCar();
        }
    }
    booth.display();
    return 0;
}
