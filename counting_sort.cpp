#include <bits/stdc++.h>
using namespace std;

int counter[10];

int main()
{
    int N = 10, M = 5;
    int A[10] = {3,5,3,5,2,1,3,2,5,1};

    // Counting Sort
    for(int i=0; i<N; i++)
        counter[ A[i] ]++;

    int k = 0;
    for(int i=0; i<=M; i++)
        for(int j=0; j<counter[i]; j++)
        {
            A[k] = i;
            k++;
        }

    // Print Array
    for(int i=0; i<10; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}