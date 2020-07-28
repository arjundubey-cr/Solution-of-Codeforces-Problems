#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string s1, s2;
	cin>>s1>>s2;
	int len=s1.length();
	for(int i=0;i<len;i++)
	{
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
	}
	if(s1==s2)
		cout<<0;
	else if(s1<s2)
		cout<<"-1";
	else
		cout<<"1";
}

int main()
{
	solve();
}
