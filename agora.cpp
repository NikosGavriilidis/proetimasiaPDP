#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return a==0 ? b : gcd(b%a,a); } 
ll lcm(ll a, ll b) { return a/gcd(a,b)*b ; }

ll N, a[1000005], prefix[1000005], suffix[1000005];

int main()
{
    scanf("%lld", &N);
    for(int i=1; i<=N; i++)
        scanf("%lld", &a[i]);

    prefix[0] = suffix[N+1] = 1;
    for(int i=1; i<=N; i++) prefix[i] = lcm(prefix[i-1], a[i]);
    for(int i=N; i>=1; i--) suffix[i] = lcm(suffix[i+1], a[i]);

    ll ans=prefix[N], village=0; // ans = suffix[1];
    for(int i=1; i<=N; i++)
        if(lcm(prefix[i-1], suffix[i+1]) < ans)
        {
            ans = lcm(prefix[i-1], suffix[i+1]);
            village=i;
        }

    printf("%lld %lld\n", ans, village);
    return 0;
}