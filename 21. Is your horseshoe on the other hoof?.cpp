#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	set<int>s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	
	int val = s.size();
	cout<<4-val;
}

int main()
{
	solve();
}
