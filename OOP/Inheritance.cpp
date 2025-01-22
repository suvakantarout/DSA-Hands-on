#include<iostream>
using namespace std;

class vehicle {
    public:
        string Vname;
        int number;
        string brand;
        
    public:
        vehicle(string Vname, int number, string brand) { 
            cout << "Vehicle Constructor called" << endl;
            this->Vname = Vname;
            this->number = number;
            this->brand = brand;
        }
        
    public:
        void vehicleStart() {
            cout << "Engine start" << endl;
        }

        void vehicleStop() {
            cout << "Engine stop" << endl;
        }
        
        ~vehicle() {
            cout << "Vehicle object destroyed" << endl;
        }
};

class car : public vehicle {
    public:
        string transmissiontype;
        int numberofdoors;
        
        car(string Vname, int number, string brand, string transmissiontype, int numberofdoors) : vehicle(Vname, number, brand) {
            cout << "Car constructor called" << endl;
            this->transmissiontype = transmissiontype;
            this->numberofdoors = numberofdoors;
        }
        
        void AcStart() {
            cout << "Car AC started" << endl;
        }
        
        ~car() {
            cout << "Car object destroyed" << endl;
        }
};

class motorcycle : public vehicle {
    public:
        int numberofdoors;
        
        motorcycle(string Vname, int number, string brand, int numberofdoors) : vehicle(Vname, number, brand) {
            cout << "Motorcycle constructor called" << endl;
            this->numberofdoors = numberofdoors;
        }
        
        void fuel() {
            cout << "Fuel added" << endl;
        }
        
        ~motorcycle() {
            cout << "Motorcycle object destroyed" << endl;
        }
};

int main() {
    car C("Thar RWD", 7777, "Mahindra", "Diesel Manual", 4);  // Created a car object
    C.vehicleStart(); 
    C.AcStart(); // Car-specific feature
    C.vehicleStop();

    motorcycle M("Royal Enfield", 8888, "Enfield", 0); // Created a motorcycle object
    M.fuel(); // Motorcycle-specific feature


    return 0;
}

