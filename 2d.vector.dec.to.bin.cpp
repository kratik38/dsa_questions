#include<iostream>
#include <vector>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	
		int n;
		cin>>n;

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}

	
		vector< vector<int> > vec;
		

		
			for (int i = 0; i < n; i++)
			{
			    vector<int> v1;
				while(arr[i])
			        {
				v1.push_back(arr[i]%2);
				arr[i]=arr[i]/2;
			        }

			    vec.push_back(v1);
			}
			
			
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = (vec[i].size())-1; j >=0; j--)
			{
				cout<<vec[i][j]<<" ";
			}
			cout<<endl;
		}

	return 0;
}