// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int rightOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if(arr[mid] == key ) {
           ans = mid;
           start = mid +1;
        }
        else if(key > arr[mid]) {
           start = mid + 1;
        }
        else {
            end  = mid - 1;
        }

        mid = start + ( end - start )/2;
    }
    return ans;
}
int leftOccurance(int arr[], int size , int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if(arr[mid] == key ) {
           ans = mid;
           end = mid -1;
        }
        else if(key > arr[mid]) {
           start = mid + 1;
        }
        else {
            end  = mid - 1;
        }

        mid = start + ( end - start )/2;
    }
    return ans;
}
int main(void)
{
    int key, arr[7] = {7, 7, 7, 34, 453, 555, 754};
    cout << "enter number : ";
    cin >> key;
    int length = sizeof(arr) / sizeof(int);

    int result = leftOccurance(arr, length, key);
    ( result == -1 ) ? cout<<endl<<"element is not present !!": cout <<endl<< " the left occurance index is : " << result<<endl;
    result = rightOccurance(arr, length, key);
    ( result == -1 ) ? cout<<endl<<"element is not present !!": cout <<endl<< " the right occurance index is : " << result<<endl;

    return 0;
}
