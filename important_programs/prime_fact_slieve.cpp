#include <iostream>
using namespace std;

/*
if we only have to print the prime numbers then in place
of spf array we take a array prime and we initialise it
with zero and then in place of the second if statement we 
initialize prime array member to 1 int the first if statement 
would be if(prime[i]==0).
*/

int primefact(int n)
{
	int spf[100]={0};

	for (int i = 2; i <= n; i++)
	{
		spf[i]=i;
	}

	for (int i = 2; i <= n; i++)
	{
		if(spf[i]==i)
		{
			for (int j = i*i; j <= n; j+=i)
			{
				if(spf[j]==j)
				{
					spf[j]=i;
				}
			}
			
		}
	}

	while(n!=1)
	{
		
		cout<<spf[n]<<" ";
		n=n/spf[n];

	}
	
	
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	primefact(n);

	return 0;
}