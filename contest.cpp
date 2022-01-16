#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--)
	{
		int a[11];
		int counta = 0,countb = 0;
		for (int  i = 1; i <= 10; i++)
		{
			cin>>a[i];
			if(a[i]==1)
			{
			if(i%2==1)
			{
				counta++;
			}
			else if(i%2==0)
			{
				countb++;
			}
			}
		}

		if(counta==countb)
		{
			cout<<'0'<<endl;
		}
		else if(counta>countb)
		{
			cout<<'1'<<endl;
		}
		else if(countb>counta)
		{
			cout<<'2'<<endl;
		}
		
	}

	return 0;
}