#include <iostream>
#include <string>

using namespace std;

int firstoccurance(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}

	if(arr[i] == key)
	{
		return i;
	}

	return firstoccurance(arr,n,i+1,key);


}

int lastoccurance(int arr[],int n,int i,int key)
{
	int restArray = lastoccurance(arr,n,i+1,key);

	if(i==n)
	{
		return -1;
	}
	
	if(restArray!=-1)
	{
		return restArray;
	}

	if(arr[i]==key)
	{
		return i;
	}

	return -1;
}

  
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,k,i;
	cin>>n>>k>>i;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	cout<<firstoccurance(arr,n,i,k)<<endl;
	

	

	return 0;
	
	
}