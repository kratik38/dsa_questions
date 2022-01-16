#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int arr[n];
	int c;

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];

	}

	for(int j=0;j<n-1;j++){
	for (int i = 0; i < n-1-j; i++)
	{
		if(arr[i]>arr[i+1])
		{
			c = arr[i]-arr[i+1];
			arr[i]= arr[i]-c;
			arr[i+1]= arr[i+1]+c;

		}


	}
	}

	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	cout<<endl;
	
	return 0;	
	

}