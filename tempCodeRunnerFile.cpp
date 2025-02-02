#include <iostream>
#include <string>
using namespace std;

class Pair {
private:
    int first;
    string second;

public:
    // Constructor
    Pair(int f, const string& s) : first(f), second(s) {}

    // Getter for first
    int getFirst() const {
        return first;
    }

    // // Setter for first
    // void setFirst(int f) {
    //     first = f;
    // }

    // Getter for second
    string getSecond() const {
        return second;
    }

    // Setter for second
    // void setSecond(const string& s) {
    //     second = s;
    // }
};

int main() {
    Pair p1(5, "Abu Faisal");

    cout << p1.getFirst() << endl;
    cout << p1.getSecond() << endl;

    return 0;
}