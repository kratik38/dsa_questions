#include<iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;

	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int count = 0;

		if(a!=b)
		{
			count++;
			if((c!=d)&&(a!=d)&&(c!=b)&&(b!=d))
			{
				count++;
			}
		}
		else if(a==b)
		{
			if((c!=b)||(c!=d))
			{
				count++;
			}
		
		}

		cout<<count<<endl;
		
	}

	return 0;
}