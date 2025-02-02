#include <iostream>
using namespace std;
class Student {
	string name;
	int roll , age;
	public:
	Student () {
		cout<<"Constructor is called !!!"<<endl;
	}
	
	~Student () {
	    cout<<"Destructor is called !!!"<<endl;
	}
	
	
	
};
int main () {
	Student s1 , s2 , s3;
	
	
	
	return 0;
}
