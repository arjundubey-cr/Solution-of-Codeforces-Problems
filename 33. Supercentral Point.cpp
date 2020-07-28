#include <stdio.h>
#include <stdlib.h>
 
int n,i,x[1005],y[1005];
int a,b,c,d,ans;
int j;
 
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       scanf("%d %d",&x[i],&y[i]);
    for(i=1;i<=n;i++)
    {
       a=b=c=d=0;
       for(j=1;j<=n;j++)
       {
          if (i==j) continue;
          if (x[j]==x[i] && y[j]<y[i]) a=1;
          if (x[j]==x[i] && y[j]>y[i]) b=1;
          if (x[j]<x[i] && y[j]==y[i]) c=1;
          if (x[j]>x[i] && y[j]==y[i]) d=1;
       }
       if (a+b+c+d==4) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
