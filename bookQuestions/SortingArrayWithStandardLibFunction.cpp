#include<iostream>
#include <algorithm>
using namespace std;
void inputArr( int arr[] , int n ) {
	for( int i=0; i<n; i++ ) {
	cout << "Enter your array element " << i + 1 << " >> ";
		cin>>arr[i];
	}
}
void printArray( int arr[] , int n ) {
	for( int i=0; i<n; i++ ) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void SortArrayFun( int arr[] , int n ) {
	sort(arr,arr+n);
}
int main () {
	int* arr = new int[7];
	cout<<"Enter your array element : "<<endl;
	inputArr( arr , 7 );
	SortArrayFun( arr , 7 );
	cout<<"The sorted elements are : "<<endl;
	printArray( arr , 7 );
	delete[] arr;
	return 0;
}

