#include <bits/stdc++.h>
using namespace std;

void solve()
{
		
}

int main()
{
	long int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int crime=0;
	int police=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==-1&&police>0)
		{
			--police;
		}
		else if(arr[i]==-1&&police<=0)
		{
			crime++;
		}
		else if(arr[i]>=0)
		{
			police+=arr[i];
		}
		
	}
	cout<<crime<<"\n";
}
