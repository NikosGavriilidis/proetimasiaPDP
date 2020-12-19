#include <bits/stdc++.h>
using namespace std;

int t, n, x, a;
pair<int,int> people[100005];

int main()
{
    scanf("%d", &t);
    for(int test=1; test<=t; test++)
    {
        printf("Case #%d: ", test);

        scanf("%d%d", &n, &x);
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &a);
            people[i] = make_pair( ceil((double)a/x) , i);
        }

        sort(people+1, people+n+1);

        for(int i=1; i<=n; i++)
            printf("%d ", people[i].second);
        printf("\n");
    }
    return 0;
}