#include <cstdio>

int N, K;

bool check(int h)
{
    int min_cubes = h;
    while(h>K)
    {
        h -= K;
        min_cubes += h;
    }

    return min_cubes <= N;
}

int main()
{
    freopen("cubes.in", "r", stdin);
    freopen("cubes.out", "w", stdout);

    scanf("%d%d", &N, &K);
    
    int h = 0;
    for(int b=N; b>0; b/=2)
        while(check(h+b))
            h += b;

    printf("%d\n", h);
    return 0;
}