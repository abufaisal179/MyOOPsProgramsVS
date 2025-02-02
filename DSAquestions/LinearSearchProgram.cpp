// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;

int TargetEle()
{
    int number;
    cout << "enter number to be search :  ";
    cin >> number;
    return number;
}
void *returnArray(int *size)
{
    static int arr[7] = {3, 12, 1, 87, 9, 45, 23};
    *size = sizeof(arr) / sizeof(int);
    return arr;
}
int LinearSearch()
{
    int length;
    int num = TargetEle();
    int *arr = (int *)returnArray(&length);

    for (int i = 0; i < length; i++)
    {
        if (num == arr[i])
            return i;
    }
    return -1;
}
int main(void)
{
    int result = LinearSearch();
    (result == -1) ? cout << "the element is not present in this Array ?!" : cout << "the element is present on " << result << "th index";
    return 0;
}
