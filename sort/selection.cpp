#include<bits/stdc++.h>
using namespace std;
 void swap(int *x,int *y)
 {
     int temp=*x;
     *x=*y;
     *y=temp;
 }
 void selectionSort(int arr[], int n)
 {
     int min_index;
     for(int i=0;i<n-1;i++)
     {
         min_index=i;
         for(int j=i+1;j<n;j++)
         {
             if(arr[j]<arr[min_index])
             {
                 min_index= j;
             }
         }
         swap(&arr[i],&arr[min_index]);
     }
 }
void print(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//    print(arr, n);
     selectionSort(arr, n);
     print(arr, n);
}
