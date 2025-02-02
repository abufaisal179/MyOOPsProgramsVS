#include <iostream>
using namespace std;
class Base {
    public:
    virtual void print() {
        cout<<"this is base !!"<<endl;
    } 
     void show() {
        cout<<"Show this base !!"<<endl;
    } 
};
class Derived : public Base {
    public: 
     void print() {
        cout<<"this is derived class !!"<<endl;
    } 
     void show() {
        cout<<"Show this derived class !!"<<endl;
    } 

};
 int main () {
    Base* bptr;
    Derived d;
    bptr = &d;

    bptr -> print();
    bptr -> show();


    return 0;
}