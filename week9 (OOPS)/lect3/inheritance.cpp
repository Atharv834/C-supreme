#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string name;
    string model;
    int noOfTyres;

public:
    // Constructor
    Vehicle(string name, string model, int noOfTyres) {
        cout << "I am inside the Vehicle constructor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    void start_engine() {
        cout << "Engine is starting" << endl;
    }

    void stop_engine() {
        cout << "Engine is stopping" << endl;
    }
};

class Car : public Vehicle {
public:
    int noOfDoors;
    int seats;

    // Constructor for Car
    Car(string name, string model, int noOfTyres, int noOfDoors, int seats) : Vehicle(name, model, noOfTyres) {
        cout << "I am inside the Car constructor" << endl;
        this->noOfDoors = noOfDoors;
        this->seats = seats;
    }

    void StartAc() {
        cout << "AC started of " << name << endl;
    }
};

class Bike : public Vehicle {
public:
    int petroltanklitres;

    // Constructor for Bike
    Bike(string name, string model, int noOfTyres, int petroltanklitres) : Vehicle(name, model, noOfTyres) {
        this->petroltanklitres = petroltanklitres;
    }

    void Ride() {
        cout << "I am riding the bike" << name <<endl;
    }
};

int main() {
    // Car A("Royce Royals", "AMx", 5, 5, 7);
    // A.start_engine();
    // A.StartAc();
    // A.stop_engine();
    //A.name ; ///cannot be accessed kyuki protected main accces nhi kar sakta 

    Bike B("BMW", "AMC", 2, 20);
    B.Ride();
    B.start_engine();
    B.stop_engine();
   

    return 0;
}
