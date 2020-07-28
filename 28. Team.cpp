#include <bits/stdc++.h>

using namespace std;


bool solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	int sum=a+b+c;
	if(sum>=2)
		return true;
	
	return false;
	
}

int main()
{
	int count=0;
	int n;
	cin>>n;
	while(n--)
	{	
		if(solve())
			count++;
	}
	cout<<count;	
		
}
