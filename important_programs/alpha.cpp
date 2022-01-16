#include <iostream>
#include <string.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char arr[101];
	cin>>arr;


	int alpha[28];

	for (int i = 0; i < 28; i++)
	{
		alpha[i]=0;
	}

	
	int c=0;
	for (int j = 0; j < strlen(arr); j++)
	{
		
		c = int(arr[j]) - 97;
		alpha[c]=1;
	
	}
	int sum=0;
	

	for (int i = 0; i < 27; i++)
	{
		sum+=alpha[i];
	}
	
	if(sum%2==0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	
	
	return 0;
}