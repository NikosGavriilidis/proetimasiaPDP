#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main()
{
	q.push(4);
	q.push(2);
	q.push(9);
	
	while( !q.empty() )
	{
		int x = q.front();
		q.pop();
		printf("%d\n", x);
	}
}
