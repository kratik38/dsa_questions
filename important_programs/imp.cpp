/*In this program two inputs are given by the user
which is n and s ,here n shows the total number of elements
in an array and s shows the sum we have to find in the
subarray and print the starting and ending index ,here 
indexing is starting from 1 as for the sake of printing indexes.
*/

#include <iostream>

using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,s;
	cin>>n>>s;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	int i=0,j=0,sum=0,st=-1,nd=-1;

	while(j<n && sum+arr[j]<s)
	{
		sum+=arr[j];
		j++;
	}

	if(sum==s)
	{
		cout<<st<<" "<<nd<<endl;
		return 0;

	}

	while(j<n)
	{
		sum+=arr[j];

		while(sum > s)
		{
			sum-=arr[i];
			i++;

		}

		if(sum==s)
		{
			st = i+1;
			nd = j+1;
			break;
		}
		j++;

	}
	cout<<st<<" "<<nd<<endl;

}
