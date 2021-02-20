#include <bits/stdc++.h>
using namespace std;

int N, A[1000005], prefix[1000005];
map<int, int> m;


int main()
{
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        scanf("%d", &A[i]);

    for(int i=1; i<=N; i++)
        prefix[i] = prefix[i-1] + A[i];

    for(int i=N; i>0; i--)
        m[prefix[i]] = i;

    m[ 0 ] = 0;
    int ans = 0;
    for(int i=1; i<=N; i++)
        if(ans <  i - (m[prefix[i]] + 1) + 1)
            ans = i - (m[prefix[i]] + 1) + 1;

    printf("%d", ans);
    
    return 0;
}