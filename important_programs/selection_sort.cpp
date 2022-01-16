#include <iostream>
using namespace std;

int32_t main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}