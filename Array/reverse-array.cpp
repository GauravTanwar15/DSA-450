#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    } 
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[]= {10,20,30,40,50};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printarray(arr, n);
    reverse(arr, 0, n-1);
    printarray(arr, n);

return 0;
}