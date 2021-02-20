#include <bits/stdc++.h>
using namespace std;

int N, diff[1000005];
char str[1000005];
map<int, int> m;


int main()
{
    scanf("%d %s", &N, str+1);
    for(int i=1; i<=N; i++)
        if(str[i]=='m') diff[i] = diff[i-1] + 1;
        else            diff[i] = diff[i-1] - 1;

    m[ 0 ] = 1;
    long long counter = 0;
    for(int i=1; i<=N; i++)
    {
        counter += m[ diff[i] - N ];
        m[ diff[i] ]++;
    }

    printf("%lld\n", counter);
    return 0;
}