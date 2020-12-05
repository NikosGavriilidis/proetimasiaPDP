#include <bits/stdc++.h>
using namespace std;
 
set<int> s, s3;
multiset<int> s2;
 
int main()
{
	// O(logn) insert, erase, count
	s.insert(3);
	s.insert(2);
	s.insert(5);
 
	printf("s.count(3) = %d \n", s.count(3));
	printf("s.count(4) = %d \n", s.count(4));
 
	s.erase(3);
	s.insert(4);
 
	printf("s.count(3) = %d \n", s.count(3));
	printf("s.count(4) = %d \n", s.count(4));
 
	s2.insert(5);
	s2.insert(5);
	s2.insert(5);
	printf("%d\n", s2.count(5));
 
	s2.erase(s2.find(5));
	printf("%d\n", s2.count(5));
 
	s3 = {5,6,8,7};
	printf("s3 size is %d \n", s3.size());
	for(auto x : s3)
	{
		printf("%d ", x);
	}
	return 0;
