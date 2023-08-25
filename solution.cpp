#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;
typedef long long LL;

LL solution1(int n)
{
	LL p = 0, q = 0, r = 1;
    for (int i = 1; i <= n; ++i) 
	{
        p = q; 
        q = r; 
        r = p + q;
    }
    return r;
}

int main()
{
	int n;
	cin >> n;
	cout << solution1(n) << endl;
	return 0;
}
