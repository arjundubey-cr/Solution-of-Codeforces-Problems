#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int exited, boarded, passengerCount(0);
	int maxValue=INT_MIN;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>exited>>boarded;
		passengerCount+=boarded-exited;
		passengerCount>maxValue?maxValue=passengerCount:maxValue=maxValue;
	}
	cout<<maxValue<<"\n";
}

int main()
{
	solve();
}
