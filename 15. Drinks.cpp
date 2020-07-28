#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin>>n;
	float finalval=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		finalval+=x;
	}
	float totalvol=n*100;
	float per=(finalval*100)/(totalvol);
	cout<<per;
	
}

int main()
{
	solve();
}
