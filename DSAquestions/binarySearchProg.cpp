// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int MidOfArray( int beg , int end ) {
    int mid = beg + (end-beg)/2; 
    return mid;
}

int *initializeAraay(int *size)
{
    static int arr[10] = {4, 5, 7, 23, 56, 67, 97, 416, 439, 590};
    *size = sizeof(arr) / sizeof(int);
    return arr;
}
int numScan(void)
{
    int n;
    cout << "enter number to be searched : ";
    cin >> n;
    return n;
}
int binarySearch(int *size, int end)
{
    int Targetnum = numScan();
    int *arr = initializeAraay(size);
    end = *size - 1;
    int start = 0;
    int mid = MidOfArray(start,end);
    while( start <= end ) {

    if(arr[mid] == Targetnum) return mid;

        if(arr[mid] <= Targetnum ) {
            start = ++mid;
            int MidOfArray( int beg , int end );
        }
        else if( arr[mid] >= Targetnum ) {
            end = --mid;
            int MidOfArray( int beg , int end );
        }
        
    }
          
     return -1;
     
}

int main(void)
{
    int Arraysize;
    int end;
             
    int result =  binarySearch(&Arraysize, end);
    (result == -1 ) ? cout<<"the element is not present in this Array ?!" : cout << "the element is present on " <<result<< "th index" ;
    return 0;                    //true                                                     //false
}
