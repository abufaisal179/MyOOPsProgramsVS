#include <iostream>
using namespace std;

class Dummy {
    int a, b, *p;

public:
    // Setter function to initialize data members
    void setData(int x, int y, int z) {
        a = x;           // Assign x to a
        b = y;           // Assign y to b
        p = new int;     // Allocate memory for pointer p
        *p = z;          // Assign z to the location p points to
    }

    // Function to display the values of a and b
    void showData() {
        cout << "a = " << a << " || " << "b = " << b << endl;
    }

    // Copy Constructor (Deep Copy)
    Dummy(Dummy &d) {
        a = d.a;           // Copy value of a from the source object
        b = d.b;           // Copy value of b from the source object
        p = new int;       // Allocate new memory for pointer p
        *p = *(d.p);       // Copy the value from the source object's pointer to the new location
    }

    // Destructor to clean up dynamically allocated memory
    ~Dummy() {
        delete p;          // Release the memory allocated for p
    }
};

int main() {
    Dummy d1;              // Create an object d1
    d1.setData(2, 3, 7);   // Initialize d1's data members
    d1.showData();         // Display d1's data

    Dummy d2 = d1;         // Create a deep copy of d1 into d2
    d2.showData();         // Display d2's data, which should be identical to d1's

    return 0;
}

