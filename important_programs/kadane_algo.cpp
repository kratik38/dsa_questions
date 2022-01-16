#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int n)
{
	int currentsum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentsum+= arr[i];
		if(currentsum<0){
		  currentsum=0;
		}
		maxsum = max(maxsum,currentsum);
	}

	return maxsum;

}

int main()
{
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

	 int wrapped;
	 int non_wrapped;
	 
	 wrapped = kadane(arr,n);
	 
	 int total_sum =0;
	 for(int i=0;i<n;i++)
	 {
		 total_sum += arr[i];
		 arr[i] = -arr[i];
		 
	 }

	 non_wrapped = total_sum + kadane(arr,n);
	 

	 cout<<wrapped<<endl;
	 cout<<non_wrapped<<endl;

	

	return 0;
}
