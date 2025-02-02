//usecase of static method in c++ OOPs
#include <iostream>
using namespace std;
class Employee {
	string name;
	static int count; // Declaration of static variable 
	public: 
	void setData(void) { cout<<"Enter you employee name : "<<endl; getline(cin , name); }
	void getData(void) { cout<<"the name is : "<<name; }
	static void StaticVarGet(void) {
	//cout<<name<<endl;  >> you can't access/modify normal variable in static function 
		count++;
	 cout<<endl<<"The value of count is : "<<count<<endl; }	
};
int Employee :: count;
int main () {
	Employee emp1; emp1.setData(); emp1.getData();
	Employee::StaticVarGet();
    cout<<endl<<"The sizeof of string data type is : >> "<<sizeof(string)<<endl;
		return 0;
	
	
}
