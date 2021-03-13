#include <bits/stdc++.h>
using namespace std;

int N, a[1000006];

int main()
{
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        scanf("%d", &a[i]);

    int ans = -1;
    for(int i=2; i<=N-1; i++)
    {
        int max_prev = -1;
        for(int j=i-1; j>=1; j--)
            max_prev = max(max_prev, a[j]);
        
        int min_next = 1000001;
        for(int j=i+1; j<=N; j++)
            min_next = min(min_next, a[j]);

        if(a[i]>max_prev && a[i]<min_next)
            ans = max(ans, a[i]);
    }

    if(ans==-1) printf("NOT FOUND\n");
    else        printf("%d\n", ans);
    return 0;
}