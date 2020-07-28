#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	while(k--)
	{
		int i=0;
		int size = s.length();
		while(i<size)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i+=2;
			}
			else{i++;}
		}
	}
	int size = s.length();
	for(int i=0;i<size;i++)
	{
		cout<<s[i];
	}
}
