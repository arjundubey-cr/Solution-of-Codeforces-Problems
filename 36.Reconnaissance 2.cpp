#include <bits/stdc++.h>
#define forn(i,n) for (int i = 0; i < (int)(n); i++)
#define inf (1<<28)
#define eps 1e-7
using namespace std;

int a[300];
int main()
{
	int n;
		cin>>n;
		forn(i, n) cin>>a[i];
		a[n]=a[0];
		
 
		int mi=inf, j;
		forn(i, n)
			if(abs(a[i]-a[i+1])<mi) {
				j=i;
				mi=abs(a[i]-a[i+1]);
			}
 
		cout<< (j%n)+1<<" "<< (j+1)%n +1;
        
 
        return 0;
}
