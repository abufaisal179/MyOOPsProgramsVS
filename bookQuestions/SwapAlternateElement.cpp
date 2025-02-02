//DSA Babbar lecture 10 : - DATE - 2 9 2024 >> 
using namespace std;
void pri#include <iostream>
ntArray( int arr[] , int size ) {
		for( int i=0; i<size; i+=1 ) {
			cout<<arr[i]<<" ";
		}cout<<endl;
 }
void swapAlternate( int arr[] , int size ) {
	for( int i=0; i<size; i+=2 ) {
		if(i+1 < size) {
			swap(arr[i] , arr[i+1]);
		}
	}
	printArray(arr,size);
} 
int main () {
	int a[5] = { 3 , 6 , 3 , 9 , 1 };
	int b[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };
    int size = sizeof(a)/sizeof(int);
    int size1 = sizeof(b)/sizeof(int);
	swapAlternate(a,size);
	swapAlternate(b,size1);
	return 0;
}
