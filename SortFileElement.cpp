// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{

    vector<int> arr(5);

    cout<<"enter array elements : "<<endl;
    for (int i = 0; i < 5; i++)  cin>>arr[i];
    

    ofstream fout;
    fout.open("HelloWorld.txt");

    fout<<"original file : "<<endl; 
    for (int i = 0; i < 5; i++) fout<<arr[i]<<" ";

    sort(arr.begin() , arr.end());

    fout<<"\n"<<"sorted file : "<<endl; 
    for (int i = 0; i < 5; i++) fout<<arr[i]<<" ";
    
    fout.close();
    return 0;
}
