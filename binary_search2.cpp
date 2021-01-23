#include <cstdio>

int N, X, arr[105];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &X);

    int k=0;
    for(int b=N; b>0; b/=2)
        while(k+b<N && arr[k+b]<=X) 
            k += b;

    if(arr[k]==X) printf("found");
    else          printf("not found");
    return 0;
}