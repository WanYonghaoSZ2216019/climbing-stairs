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

int solution2(int n)
{
	if(n == 0 || n == 1)
        return 1;
    return solution2(n - 1) + solution2(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << solution1(n) << endl;
	cout << solution2(n) << endl;
	return 0;
}
