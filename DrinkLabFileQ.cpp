#include <iostream>
using namespace std;
string switchToDrink(int n)
{
    //Coke, Water, Sprite, Juice, and Milk
    switch (n)
    {
    case 1:
        return "Coke";
        break;
    case 2:
        return "Water";
        break;
    case 3:
        return "Sprite";
        break;
    case 4:
        return "Juice";
        break;
    case 5:
        return "Milk";
        break;
    default:
        return "You choosed Invalid Drink";
    }
}
int main()
{

    int n;
    cout<<"1.Coke"<<endl;
    cout<<"2.Water"<<endl;
    cout<<"3.Sprite"<<endl;
    cout<<"4.Juice"<<endl;
    cout<<"5.Milk"<<endl;
    cout << "Enter particular Drink From ( 1 - 5 ) : >> ";
    cin >> n;

    string Drink = switchToDrink(n);
    cout<<" you choosed : "<<Drink;

    return 0;
}