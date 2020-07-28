//we can use set from stl but im not using it in order to explore 
// some other method of solving the same problem

#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int dis=0;
	string s;
	cin>>s;
	int charArray[26]={0};
	int len=s.length();
	
	for(int i=0;i<len;i++)
	{
		int temp=s[i]-'a';
		charArray[temp]++;
	}
	for(int i=0;i<len;i++)
	{
		if(charArray[i]>0)
			dis++,cout<<i<<"\n";
	}
	dis%2!=0?cout<<"IGNORE HIM!":cout<<"CHAT WITH HER!";
}

int main()
{
	solve();
}
