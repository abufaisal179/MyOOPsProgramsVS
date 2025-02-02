#include <iostream>
using namespace std;
//student 
//boy
//girl
//male
//female

class Male {
	public:
	void PrintMale(void) {
		cout<<"its Male class !!"<<endl;
	}
};
class Female {
	public:
	void PrintFeMale(void) {
		cout<<"its Female class !!"<<endl;
	}
};
class Student {
	public:
	string name;
	void PrintSt(void) {
		cout<<"its student class !!"<<endl;
	}
};
class Boy : public student {
	public:
    void PrintBoy(void) {
    	cout<<"its Boy class !!"<<endl;
	}
};
class Girl {
	public:
	void PrintGirl(void) {
		cout<<"its Girl class !!"<<endl;
	}
};

int main () {
	

return 0;
}

