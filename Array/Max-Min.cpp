#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    cout<<endl;   
};

int Max(struct Array arr)
{
    int max= arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;    
}

int Min(struct Array arr)
{
    int min= arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;    
}

int main(){

struct Array arr={{10,343,200,500,2},20,5};
cout<<"Array: ";
Display(arr);
cout<<"Maximum element is: "<<Max(arr)<<endl;
cout<<"Minimum element is: "<<Min(arr);


return 0;
};