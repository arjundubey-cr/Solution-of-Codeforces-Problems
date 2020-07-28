#include <bits/stdc++.h>

using namespace std;

void solve()
{
	
}
int a[7];
int main()
{
	int n;
  int i;
  scanf("%d", &n);
  for(i = 0; i < 7; i++)
    cin>>a[i];
  i = 0;
  while(n)
  {
    i %= 7;
    n -= a[i];
    n = max(n, 0);
    i++;
  }
  printf("%d\n", i);
  return 0;
}
