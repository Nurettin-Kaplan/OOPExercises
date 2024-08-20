#include <iostream>
using namespace std;

class Vehicle{
protected:
    string manufacturer;
    int year;
    string color;
public:
    string getManufacturer(){
        return this->manufacturer;
    }
    void setManufacturer(string value){
        this->manufacturer = value;
    }

    int getYear(){
        return this->year;
    }
    void setYear(int value){
        this->year = value;
    }

    string getColor(){
        return this->color;
    }
    void setColor(string value){
        this->color = value;
    }

    Vehicle(){
        cout << "\nAn instance has been derived from Vehicle." << endl;
    }

    Vehicle(string manufacturer, int year, string color) : Vehicle() {
        cout << "\nAn instance with full parameters has been derived from Vehicle." << endl;

        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }

    void start(){
        cout << "Vehicle has been started." << endl;
    }
    void stop(){
        cout << "Vehicle has been stopped." << endl;
    }
    void drive(){
        cout << "Vehicle is driving." << endl;
    }
};

class Car : public Vehicle {
public:
    Car(){
        cout << "\nAn instance has been derived from Car." << endl;
    }

    Car(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color){        
        cout << "\nAn instance with full parameters has been derived from Car." << endl;
    }

    void openSunRoof(){
        cout << "The sunroof has been opened." << endl;
    }
};

class Truck : public Vehicle{ 
public:
    Truck(){
        cout << "\nAn instance has been derived from Truck." << endl;
    }
    Truck(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color){
        cout << "\nAn instance with full parameters has been derived from Truck." << endl;
    }
    void transport(){
        cout << "transport() has been called." << endl;
    }
};

class Bus : public Vehicle{
public:
    Bus(){
        cout << "\nAn instance has been derived from Bus." << endl;
    }
    Bus(string menufacturer, int year, string color) : Vehicle(manufacturer, year, color){
        cout << "\nAn instance with full parameters has been created from Bus class." << endl;
    }
    void scheduling(){
        cout << "Scheduled." << endl;
    }
};

class SchoolBus : public Bus{
public:
    SchoolBus(){
        cout << "\nAn instance has been derived from SchoolBus." << endl;
    }
    SchoolBus(string manufacturer, int year, string color) : Bus(manufacturer, year, color){
        cout << "\nAn instance with full parameters has been derived from SchoolBus." << endl;
    }
    void getFare(){
        cout << "getFare() has been called." << endl;
    }
};

int main(){

    Vehicle item1 = Vehicle("Skoda", 2019, "White");
    cout << "Vehicle " << item1.getManufacturer() << endl;

    Car item2 = Car();
    item2.setManufacturer("TOGG");
    cout <<"Vehicle " << item2.getManufacturer() << endl;
    item2.openSunRoof();

    Car item3 = Car("Opel", 2020, "Black");
    cout <<"Vehicle " << item3.getManufacturer() << endl;
    item3.openSunRoof();

    Truck item4 = Truck("Mercedes", 2018, "Red");
    cout << "Vehicle " << item4.getManufacturer() << endl;
    item4.transport();

    Bus item5 = Bus("Anadolu Isuzu", 2016, "Brown");
    cout << "Vehicle " << item5.getManufacturer() << endl;
    item5.scheduling();

    SchoolBus item6 = SchoolBus("Isuzu", 2015, "Yellow");
    cout << "Vehicle " << item6.getManufacturer() << endl;
    item6.scheduling();
    item6.getFare();

    return 0;
}