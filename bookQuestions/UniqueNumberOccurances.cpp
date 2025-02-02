//Unique number occurances 
/* 
Algorithm ==>>
example :-  we have an array like this -- arr[5] = { 4 , 5 , 4 , 5 , 5 };
in this array both number 4 , 5 has unique occurances 
>>  4 occur two times and 5 three times
        4 -> 2
        5 -> 3
*/
#include <iostream>
using namespace std;
void bubbleSort( int arr[] , int n ) {
	for( int i=0; i<n; i++ ) {
			for( int j=0; j<n-i-1; j++ ) {
				if( arr[j]>arr[j+1]) {
					swap(arr[j] , arr[j+1]);
				}
			}
     }
}
int UniqueOccurances( int arr[] , int size ) {
	int brr[5];
	int j=0 , count=0;
    while(j<size) {
    	for( int i=0; i<size; i++ ) {
    		if(arr[j] == arr[i] ) {
    			count++;
			}
			brr[j] = count;
			count = 0; 
		}
		j++;
	}
	   bubbleSort(arr,size);
	   for( int i=0; i<3; i++ ) {
	   	cout<<brr[i]<<" ";
	   	  if( brr[i] == brr[i+1] ) {
	   	  	   return false;
			 }else {
			 	return true;
			 }
	   }
	}
	

int main () {
	int arr[6] = {  6 , 4 , 4 , 6 , 6 , 4  };
	int size = sizeof(arr)/sizeof(int);
	int n = UniqueOccurances(arr , size);
	cout<<endl<<n;
	return 0;
}
	
	
	
	
	
