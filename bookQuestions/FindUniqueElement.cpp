#include <iostream>
using namespace std;
int PrintUniqueEle( int arr[] , int size ) {
	int ans = 0;
	for( int i=0; i<size; i++ ) {
	  ans = arr[i]^ans;
	}
	return ans;
}
int main () {
	int arr[7] = { 3 , 4, 5 , 3 , 4 , 5 , 10 };
	int size = sizeof(arr)/sizeof(int);
	int ans = PrintUniqueEle( arr , size );
	cout<<"Unique element is : "<<ans;

	return 0;
}
