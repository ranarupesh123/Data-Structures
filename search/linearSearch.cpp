#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int ele){
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int arr[5];
	cout<<"enter array elements:";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"enter element to found:";
	int ele;
	cin>>ele;
	if(linearSearch(arr,n,ele))
	{
		cout<<"Element found";
	}
	else
	{
		cout<<"element not found";
	}
}
