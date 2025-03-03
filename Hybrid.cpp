#include <iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle() {
            cout << "This is Vehicle" << endl; 
        }
};

class FourWheeler : public Vehicle {
    public:
        FourWheeler() {
            cout << "This is Four Wheeler class" << endl;
        }
};

class Car : public Vehicle {
    public:
        Car() {
            cout << "This is Car class" << endl;
        }
};

class Driver : public Car {
    public:
        Driver() {
            cout << "This is Driver class" << endl;
        }
};

int main() {
    Car obj;
    FourWheeler obj2;
    return 0;
}