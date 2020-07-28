#include <bits/stdc++.h>

using namespace std;

void solve()
{
	set<char>charSet;
	string str;
	cin>>str;
	int stringLength=str.length();
	for(int i=0;i<stringLength;i++)
		charSet.insert(str[i]);
	
	int setSize=charSet.size();
	setSize%2!=0?cout<<"IGNORE HIM!":cout<<"CHAT WITH HER!";
}

int main()
{
	solve();
}
