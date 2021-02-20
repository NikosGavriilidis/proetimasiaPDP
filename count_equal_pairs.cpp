#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> freq;

int main()
{
    int N = 10;
    int A[10] = {1, 4, -3, -3, 2, -3, 9, 2, 7, 6};

    int counter = 0;
    for(int i=0; i<N; i++)
    {
        counter += freq[ A[i] ];
        freq[ A[i] ]++;
    }

    printf("%d\n", counter);
    return 0;
}