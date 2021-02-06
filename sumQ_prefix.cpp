// https://www.spoj.com/problems/CSUMQ/
#include <bits/stdc++.h>
using namespace std;

// O(N+Q)
int N, Q, A[100005], prefix[100005];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);

    prefix[0] = A[0];
    for(int i=1; i<N; i++)
        prefix[i] = prefix[i-1] + A[i]; 

    scanf("%d", &Q);
    for(int sum,i,j,q=0; q<Q; q++)
    {
        scanf("%d%d", &i, &j);
        if(i==0) sum = prefix[j];
        else     sum = prefix[j] - prefix[i-1];

        printf("%d\n", sum);
    }

    return 0;
}