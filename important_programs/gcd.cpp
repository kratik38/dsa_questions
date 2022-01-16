#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	int rem=0;
	while(b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	cout<<a<<endl;
	return 0;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b;

	cin>>a>>b;

	gcd(a,b);
	return 0;
}