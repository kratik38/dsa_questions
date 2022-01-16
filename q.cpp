#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int  t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		long long arr[n];
		long long min = INT_MAX;
		long long max = INT_MIN;
		long long count = 0;
		int idxmax=0;

		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if(max<arr[i])
			{
				max = arr[i];
				idxmax = i;
			}

			if(min>arr[i])
			{
				min = arr[i];
			}

		}

		arr[idxmax] = min;
		


		for (int j = 0; j < n; j++)
		{
			count += arr[j]/min;
		}
		
		cout<<count<<endl;


		
	}



	return 0;
}