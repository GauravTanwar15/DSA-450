#include <iostream>
#include<algorithm>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

 void sort012(int arr[], int n)
    {
        int low=0, int mid=1, int high=n-1;

        while (mid <= high)
        {
            if(arr[mid]==0)
            swap(&a[mid++], &a[low++]);

            else if(arr[mid==1])
            mid++;

            else
            swap(&a[mid], &a[high--]);
        }
    };


int main(){

    int arr[];
    int n;

    sort012(arr, n);



   

return 0;
}