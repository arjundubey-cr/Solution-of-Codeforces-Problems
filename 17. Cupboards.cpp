#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	int rightopen(0), rightclosed(0), leftopen(0), leftclosed(0);
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		if(x==0)	rightopen++;
		else if(x==1)	rightclosed++;
		if(y==0)	leftopen++;
		else if(y==1)	leftclosed++;
	}
	int a=min(rightopen, rightclosed);
	int b=min(leftopen, leftclosed);
	cout<<a+b<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
