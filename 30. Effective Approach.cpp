#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <vector>
#include <cctype>
#include <string>
#include <ctime>
#include <cmath>
#include <set>
#include <map>
 
typedef long double LD;
typedef long long LL;
 
using namespace std;
 
#define sz(A) (int)(A).size()
#define mp make_pair
#define pb push_back
 
const int N = int(1e5 + 3);
 
int n, m, pos[N];
 
int main() {
        scanf("%d", &n);       
        for (int i = 0; i < n; i++) {
                int num;
                scanf("%d", &num);
                pos[num] = i + 1;
        }      
 
        LL sum1 = 0, sum2 = 0;
 
        scanf("%d", &m);       
        for (int i = 0; i < m; i++)     {
                int q;
                scanf("%d", &q);
                sum1 += pos[q];
                sum2 += n - pos[q] + 1;                        
        }
 
        printf("%I64d %I64d\n", sum1, sum2);
 
        return 0;
}
