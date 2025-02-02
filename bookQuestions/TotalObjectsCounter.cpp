#include <iostream>
using namespace std;

class Customer {
	string name;
	int account_number;
	static int balance;
	static int total_obj;
	public:
	Customer ( string name , int account_number , int balance ) {
		this->name = name;
		this->account_number = account_number;
		this->balance += balance;
		total_obj++;
	}
    void display () {
    	cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_obj<<endl;
	}
	
};
int Customer :: total_obj = 0; 
int Customer :: balance = 0;
int main () {
	Customer obj1("Faisal",12345567,1000);
	Customer obj2("Faisal",12345556,1500);
	Customer obj3("Faisal",12345545,2500);
    obj2.display();
	obj1.display();
	obj3.display();
	return 0;
}
