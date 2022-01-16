#include <iostream>
using namespace std;

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int space = (2*n-1)/2;

	for(int i=1;i<=n;i++)
	{

	for(int j=1;j<=space;j++)
	{
		cout<<"  ";
	}
	for(int j=1;j<=2*i-1;j++)
	{
		cout<<" *";
	}
		cout<<endl;
		space--;
	}
	space=0;
	
	return 0;
}