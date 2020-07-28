#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void solve()
{
	int n;
	cin>>n;
	if(n%2!=0){
		cout<<"-1";
		return;
	}
	else
	{
		int arr[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=i+1;
		}
		for(int i=0;i<n;i+=2)
		{
			swap(&arr[i], &arr[i+1]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}

int main()
{
	solve();
}
