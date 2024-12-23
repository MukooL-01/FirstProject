#include <iostream>
using namespace std;

void showarr(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
            cout<<arr[j]<<"\t";
    }
}
int main() 
{
    int arr[5];
    int n=5;
    cout<<"Enter value for array : "<<endl;
     for(int i=0;i<n;i++)
     {
    cin>>arr[i];
     }
     showarr(arr,5);
}