#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int count=0;
	int min(0), max(0);
	int t;
	cin>>t;
	int x;
	cin>>x;
	t--;
	min=x;
	max=x;
	while(t--)
	{
		cin>>x;
		if(x>max) count++, max=x;
		else if(x<min) count++, min=x;
	}
	cout<<count<<"\n";
}

int main()
{
	solve();
}
