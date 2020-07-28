#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int res=0;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s[1]=='+')
			res++;
		else
			res--;
	}
	cout<<res<<"\n";
}

int main()
{
	solve();
}
