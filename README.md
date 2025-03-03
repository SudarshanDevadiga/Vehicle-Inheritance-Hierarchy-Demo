# Vehicle Inheritance Hierarchy Demo

A C++ program demonstrating a simple class hierarchy using inheritance to model vehicles, four-wheelers, cars, and drivers.

## Description

This program illustrates the concept of inheritance in C++ by creating a class hierarchy that includes a base class `Vehicle` and derived classes `FourWheeler`, `Car`, and `Driver`. Each class constructor outputs a message indicating its creation, demonstrating the order of constructor calls in inheritance.

### Key Features
- Inheritance hierarchy
- Constructor chaining
- Class relationships
- Simple output demonstration

## Class Structure

```cpp
class Vehicle {
    public:
        Vehicle();
};

class FourWheeler : public Vehicle {
    public:
        FourWheeler();
};

class Car : public Vehicle {
    public:
        Car();
};

class Driver : public Car {
    public:
        Driver();
};
