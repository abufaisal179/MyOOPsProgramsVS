// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <exception>
using namespace std;

class Myexception : public exception
{
protected:
    string msg;

public:
    Myexception(string msg)
    {
        this->msg = msg;
    }
    string what()
    {
        return msg;
    }
};

int main(void)
{
    try
    {
        // Throw a custom exception with a message
        throw Myexception("An error has occurred: Custom Exception Thrown!");
    }
    catch (Myexception &e)
    {
        cout<<"Exception caught : "<<e.what()<<endl;
    }

    return 0;
}
