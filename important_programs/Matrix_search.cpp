#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,k;
	cin>>n>>m>>k;

	int arr[n][m];

	bool found=false;

	for (int i = 0; i < n; i++)
	{
		for (int j=0 ;j< m; j++)
		{
			cin>>arr[i][j];
		}
		
	}

	int r=0,c=m-1;

	while(r<n && c >=0)
	{
		if(arr[r][c]>k)
		{
			c--;
		}
		else if (arr[r][c]==k)
		{
			found = true;
			break;
		}
		else
		{
			r++;
		}
	}

	if(found)
	{
		cout<<"Element Found";
	}
	else{
		cout<<"Element not found";
	}

	return 0;


}