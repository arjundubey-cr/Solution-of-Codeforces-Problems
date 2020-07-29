#include <bits/stdc++.h>

using namespace std;

void solve()
{
	
}

int main()
{
	long long int a,b, counter=0;
	cin>>a>>b;
	while(a<=b)
	{
		a=a*3;
		b=b*2;
		counter++;
	}
	cout<<counter<<"\n";
}
