#include <iostream>
using namespace std;

int main(){

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

	int N = 1e6+2;
	int idx[N];

	for(int i=0;i<N;i++)
	{
		idx[i]=-1;
	}

	int minidx=INT_MAX;

	for(int i=0;i<n;i++)
	{
		if(idx[arr[i]]!=-1)
		{
			minidx= min(minidx,idx[arr[i]]);
		}
		else
		{
			idx[arr[i]]= i; 
		}
	}

	if(minidx==-1)
	{
		cout<<"-1"<<endl;
	}
	else{
		cout<<minidx<<endl;
	}

}