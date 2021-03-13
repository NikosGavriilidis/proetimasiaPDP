#include <bits/stdc++.h>
using namespace std;

int N, a[1000006], prefix_max[1000005], suffix_min[1000005];

int main()
{
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        scanf("%d", &a[i]);

    prefix_max[1] = a[1];
    for(int i=2; i<=N; i++)
        prefix_max[i] = max(prefix_max[i-1], a[i]);
        
    suffix_min[N] = a[N];
    for(int i=N-1; i>0; i--)
        suffix_min[i] = min(suffix_min[i+1], a[i]);

    int ans = -1;
    for(int i=2; i<=N-1; i++)
        if(a[i]>prefix_max[i-1] && a[i]<suffix_min[i+1])
            ans = max(ans, a[i]);

    if(ans==-1) printf("NOT FOUND\n");
    else        printf("%d\n", ans);
    return 0;
}