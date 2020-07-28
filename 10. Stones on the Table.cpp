#include <bits/stdc++.h>

using namespace std;

void solve()
{
	
}

int main()
{
	int n;
	cin>>n;
	char arr[n];
	int counter=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			counter++;
		}
	}
	cout<<counter<<"\n";
	
}
