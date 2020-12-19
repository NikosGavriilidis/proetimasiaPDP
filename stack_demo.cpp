#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main()
{
	s.push(4);
	s.push(7);
	s.push(6);
	
	while( !s.empty() )
	{
		int x = s.top();
		s.pop();
		printf("%d\n", x);
	}
	
	return 0;
}
