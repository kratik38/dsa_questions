#include<iostream>
#include <vector>
using namespace std;

int gcd(int a,int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int arr[n];


		int mini = INT_MAX;
		int maxi = INT_MIN;
		int imax=0;
		int imin=0;


		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			
			mini = min(mini,arr[i]);
			if(mini==arr[i])
			{
				imin = i;
			}
			maxi = max(maxi,arr[i]);
			if(maxi==arr[i])
			{
				imax = i;
			}
		}

		arr[imax]= mini;
		
		int gcd = findGCD(arr,n);

		int count = 0;

		for (int i = 0; i < n; i++)
		{
			count += arr[i]/mini;
		}
		
		cout<<count<<endl;
	}

	return 0;
}