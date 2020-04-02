#include <bits/stdc++.h>

using namespace std;
/*
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// A simple method to evaluate Euler Totient Function
int phi( int n)
{
     int result = 0;
    for (int i = 1; i <=n; i++)
        if (gcd(i, n) == 1)
          {

            result++;}
    return result;
}

// Driver program to test above function
int main()
{
    int n;
    //cout<<".."<<__gcd(1,1)<<endl;
    for (n = 1; n <= 10; n++)
        printf("phi(%d) = %d\n", n, phi(n));
    return 0;
}

int phi(int n)
{
    float result = n; // Initialize result as n

    // Consider all prime factors of n and for every prime
    // factor p, multiply result with (1 - 1/p)
    for (int p = 2; p * p <= n; ++p) {

        // Check if p is a prime factor.
        if (n % p == 0) {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
                 cout<<"n=="<<n<<endl;
                cout<<"p=="<<p<<endl;
            result *= (1.0 - (1.0 / (float)p));
            cout<<".."<<result<<endl;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));
         cout<<".44."<<result<<endl;

    return (int)result;
}

// Driver program to test above function
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
        printf("phi(%d) = %d\n", n, phi(n));
    return 0;
}
*/

int phi[1000006] , mark[10000006];
void Euler_Totient(int n)
{
    for(int i = 1; i <= n; i++)
    {
        phi[i] = i;
    }
    phi[1] =1;
    mark[1]=1;
    for(int i = 2; i <= n; i++)
    {
        if(!mark[i]) // if i is prime
        {
            for(int j = i; j <= n; j += i)
            {
                mark[j] = 1;
                printf("Mark[%d]= %d\n\n",j,mark[j]);
                ///phi[j] is divisable by i

                phi[j] = phi[j] / i * (i - 1);
                printf("phi[%d]= %d\n",j,phi[j]);
            }
        }
    }
}
int main()
{
    Euler_Totient(9);

    cout<<phi[9]<< endl;
}
