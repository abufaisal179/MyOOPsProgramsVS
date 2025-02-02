#include <iostream>
using namespace std;
class Customer {
	string name;
	int account_number;
	float balance;
	
	public:
   Customer () {        
    cout<<"contructor called !"<<endl;
  }
  Customer (string name , int account_number , float balance ) {   
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
  } //constructor overloading 
   Customer (string name , float balance ) {
    this->name = name;
    this->balance = balance;
  }
    //inline constructor 
    inline Customer(string name ) : name(name){

	}
  
  void display () {
  	cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
  }
   void display1 () {
  	cout<<name<<" "<<balance<<" "<<endl;
  }
  void display2 () {
  	cout<<name<<" "<<endl;
  }
  
  
	
};
  
   



int main () {
	Customer A1;
	Customer A2("abu faisal" , 123 , 776.45); 
	A2.display();
	Customer A3("vishal" , 234.76);
	A3.display1();
	Customer A4("Rohit");
	A4.display2();
	
	return 0;
}
