#include <iostream>
#include <vector>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	long long n;
	do{
		cin>>n;

		vector< pair <int,int> > v;

		long long perm[n];
		long long inverse[n];
		for (int i = 0; i < n; i++)
		{
			cin>>perm[i];
			
		}

		for (int i = 0; i < n; i++)
		{
			v.push_back(make_pair(perm[i],i+1));
			inverse[(v[i].first)-1]=v[i].second;
			
		}
		

		bool flag = true;

		for (int i = 0; i < n; i++)
		{
			if(inverse[i]!=perm[i])
			{
				flag = false;
			}
		}
		
		if(flag)
		{
			if(n!=0)
			 cout<<"ambiguous"<<endl;
		}
		else{
			if(n!=0)
			 cout<<"non ambiguous"<<endl;
		}
		

	}while(n!=0);

	

	return 0;
}
