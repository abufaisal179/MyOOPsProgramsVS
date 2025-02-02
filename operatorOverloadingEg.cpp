#include <iostream>
using namespace std;

class Loc {
    int longitude, latitude;
    
public:
    // Default constructor
    Loc() : longitude(0), latitude(0) {}
    
    // Parameterized constructor
    Loc(int longitude, int latitude) {
        this->longitude = longitude;
        this->latitude = latitude;
    }
    
    // Function to display the coordinates
    void display() const {
        cout << "Longitude: " << longitude << ", Latitude: " << latitude << endl;
    }
    
    // Operator overloading for addition
    Loc operator+(const Loc& op2) {
        // Create a new Loc object with the sum of longitude and latitude
        return Loc(this->longitude + op2.longitude, this->latitude + op2.latitude);
    }
};

int main() {
    Loc ob1(10, 20);
    Loc ob2(5, 30);
    
    // Display the original locations
    cout << "Location 1: ";
    ob1.display();
    cout << "Location 2: ";
    ob2.display();
    
    // Use overloaded + operator to add two locations
    Loc ob3 = ob1 + ob2;
    
    // Display the result of addition
    cout << "Location 3 (Sum): ";
    ob3.display();

    return 0;
}