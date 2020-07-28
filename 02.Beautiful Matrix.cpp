#include <iostream>
using namespace std;
int solve()
{
	int arr[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				int xval=abs(2-i);
				int yval=abs(2-j);
				return xval+yval;
			}
		}
	}
	return 0;
	
}
int main()
{
	cout<<solve();
}
