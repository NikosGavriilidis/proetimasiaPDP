#include <cstdio>

int N, X, arr[105];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &X);

    int lo=0, hi=N-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid] == X)     break;
        else if(X < arr[mid]) hi = mid - 1;
        else if(X > arr[mid]) lo = mid + 1;
    }

    if(lo<=hi) printf("found");
    else       printf("not found");
    return 0;
}