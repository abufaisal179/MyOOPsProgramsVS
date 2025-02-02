// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;

int returnMid(int end , int arr[], int start)
{    
    int mid = start + (end - start) / 2;
    return mid;
}
int rightOccurance(int arr[], int key, int start , int end )
{
    
    int mid = returnMid(end, arr, start);
    int ans = -1;
   


    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
         return ans;
}
int leftOccurance(int arr[], int key, int start , int end )
{
    int mid = returnMid(end, arr, start); 

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(void)
{
    int key, start = 0, arr[7] = {7, 7, 7, 34, 453, 555, 754};
    int index = sizeof(arr)/sizeof(int)-1;
    cout << "enter number : ";
    cin >> key;

     int right = (rightOccurance( arr,  key, start, index));
     int left = (leftOccurance( arr,  key, start, index));

    if (left == -1 || right == -1) {
        cout << "Element is not present !!" << endl;
    } else {
        int result = right - left + 1;
        cout << "Total number of occurrences: " << result << endl;
    }

    return 0;
}
