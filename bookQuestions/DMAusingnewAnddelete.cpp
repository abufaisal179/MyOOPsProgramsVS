// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    int* p = new int[2];
    int arr[2] = { 4 , 5 };


    memcpy ( p , arr , 2*(sizeof(int)));
    for( int i=0; i<2; i++ ) {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    delete[] p;
    for( int i=0; i<2; i++ ) {   //>> random address will return !! 
        cout<<p[i]<<" ";
    }

  return 0;
}
