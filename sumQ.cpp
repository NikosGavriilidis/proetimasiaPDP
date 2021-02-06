// https://www.spoj.com/problems/CSUMQ/
#include <bits/stdc++.h>
using namespace std;

int N, Q, A[100005];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);

    // O(Q*N)
    scanf("%d", &Q);
    for(int i,j,q=0; q<Q; q++)
    {
        scanf("%d%d", &i, &j);

        int sum = 0;
        for(int k=i; k<=j; k++)
            sum += A[k];

        printf("%d\n", sum);
    }

    return 0;
}