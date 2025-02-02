#include <iostream>
using namespace std;
class Officer {
	protected:
	int rank;
      void PrintRank(void) {
    	cout<<"The rank of officer is : "<<rank<<endl;
	}
};
class Cricketer {    
	protected:
    string role;
	  void PrintRole(void) {
    	cout<<"The role is : "<<role<<endl;
	}
};
class SoftwareDeveloper : Cricketer , Officer {
	protected: 
	string frontend;
	 void PrintStack(void) {
    	cout<<"The stack is : "<<frontend<<endl;
	}
	void PrintCharacteristic(void) {
		PrintRank();
		PrintStack();
		PrintRole();
		
	}

};
int main () {
	SoftwareDeveloper D1;
	
	
	return 0;
}
