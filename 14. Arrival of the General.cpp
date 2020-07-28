#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[n];
	int max(0), min=101;
	int minindex=-1, maxindex=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(min>=arr[i])
			minindex=i,min=arr[i];
		if(max<arr[i])
			max=arr[i], maxindex=i;
	}
	int finalval = maxindex + n - minindex-1;
	if(maxindex>minindex)
		finalval--;
	cout<<finalval;
	return;
	
	
}

int main()
{
	solve();
}
