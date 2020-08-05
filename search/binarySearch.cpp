#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int ele)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(arr[mid]==ele)
		{
			return 1;
		}
		else if(arr[mid]>ele)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
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
