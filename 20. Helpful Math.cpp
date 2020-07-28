#include <bits/stdc++.h>

using namespace std;

void solve()
{
	vector<int>v;
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]!='+') 
		{
			int x=s[i]-'0';
			v.push_back(x);
		}
	}
	
	sort(v.begin(), v.end());
	int vecSize = v.size();
	for(int i=0;i<vecSize-1;i++)
		cout<<v[i]<<"+";
	
	cout<<v[vecSize-1]<<"\n";
}

int main()
{
	solve();
}
