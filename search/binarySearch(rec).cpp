#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int ele)
{
	if(r>=l)
	{
		int mid=(l+r)/2;
		if(arr[mid]==ele)
		{
			return mid;
		}
		else if(arr[mid]>ele){
			return binarySearch(arr,l,mid-1,ele);
		}
		else
		{
			return binarySearch(arr,mid+1,r,ele);
		}
	}
	return 0;
}
int main()
{
	int n;
	cout<<"enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter array ele:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ele;
	cout<<"enter ele you want to find:";
	cin>>ele;
	if(binarySearch(arr,0,n-1,ele))
	{
		cout<<"ele found";
	}
	else
	{
		cout<<"ele not found";
	}
}
