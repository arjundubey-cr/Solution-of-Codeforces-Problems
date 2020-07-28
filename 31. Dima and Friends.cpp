#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int numberOfFriends, sum=0, counter=0;
	cin>>numberOfFriends;
	for(int i=0;i<numberOfFriends;i++)
	{
		int x;
		cin>>x;
		sum+=x;
	}
	int fin=numberOfFriends+1;
	int maxFing=sum+5;
	int minFing=sum+1;
	for(int i=minFing;i<=maxFing;i++)
	{
		if(i%fin!=1)
			counter++;
			
	}
	cout<<counter<<"\n";
}

int main()
{
	solve();
}
