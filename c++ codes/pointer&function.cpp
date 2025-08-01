
#include <bits/stdc++.h>
using namespace std;

void incr(int p[])
{
	for(int i=0; i<5; i++)
		p[i]=p[i]*2;
}
int main()
{
	vector<int>a= {1,2,3,4,5};
	incr(a.data());
	for(int i=0; i<5; i++)
		cout<<a[i]<<" ";
	return 0;
}