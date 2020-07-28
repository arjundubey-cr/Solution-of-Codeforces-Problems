#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x=0,y=0,z=0;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	if(x==0&&y==0&&z==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
