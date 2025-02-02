//bubble sorting : ---->
#include <iostream>
using namespace std;
 void printArray( int arr[] , int n ) {
     for(int i=0; i<n; i++ ) {
     	cout<<arr[i]<<" ";
	 }
}
void bubbleSort( int arr[] , int n ) {
	for( int i=0; i<n; i++ ) {
			for( int j=0; j<n-i-1; j++ ) {
				if( arr[j]>arr[j+1]) {
					swap(arr[j] , arr[j+1]);
				}
			}
		}
	printArray( arr , n );
} 
int main () {
	int arr[8] = { 3 , 5, 10 , 45 , 29 , 4 , 2 , 1 };
	int size = sizeof(arr)/sizeof(int);
	//cout<<size<<endl;
	 bubbleSort(arr,size);
	 return 0;
}
