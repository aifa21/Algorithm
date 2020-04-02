

#include <bits/stdc++.h>

using namespace std;
 int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int cm(int a,int b)
{
     int n = gcd(a, b);
     cout<<"n="<<n<<endl;
     int result = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i == 0) {
			result++;
			if (n / i != i)result++;
		}
    }
    return result;
}

int main()
{
    int n,m;

    while(cin>>n>>m)
    {

 int res=cm(n,m);


       cout<<res<<endl;

    }
    return 0;
}
