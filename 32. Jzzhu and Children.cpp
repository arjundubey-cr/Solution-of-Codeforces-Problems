#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	int i;
    int now=1;
    int maxi=0;
    for (i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if ((x-1)/m+1>=maxi)
        {
            maxi=(x-1)/m+1;
            now=i;
        }
    }
    cout<<now<<endl;
}

int main()
{
	solve();
}
