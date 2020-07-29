#include <bits/stdc++.h>

using namespace std;

void solve()
{
	
}

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int counter=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
			counter++;
	}
	cout<<counter<<"\n";
}
