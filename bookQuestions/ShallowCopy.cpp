#include<iostream>
using namespace std;
class Dummy {
	int a  , b;
	public : 
	//Setter function  >>
	void setData( int x , int y ) {
		a = x;
		b = y;
	}
	//Getter function  >>
	void showData() {
		cout<<"a = "<<a<<"  ||  "<<"b = "<<b<<endl;
	}
	
};
int main () {
	Dummy d1;
	d1.setData(3,4);
	d1.showData();
	Dummy d2=d1;
	d2.showData();
	return 0;
}
