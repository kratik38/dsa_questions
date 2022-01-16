#include <iostream>
using namespace std;

bool key_pair_sum(int arr[],int n,int k)
{
	
	int low=0;
	int high=n-1;

	for(int i=0;i<n;i++)
	{
		if(arr[low]+arr[high]==k)
		{
			cout<<low<<" "<<high<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>k)
		{
			high--;
		}
		else
		{
			low++;
		}
	}
	return false;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout << key_pair_sum(arr,n,k) << endl;

	return 0;
}