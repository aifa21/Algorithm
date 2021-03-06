#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <string>
#include <map>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 10000
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long

using namespace std;

int data[35]= {10000000,8, 1, 9, 8, 3, 4, 6, 1, 5, 2};
int I[30],L[35],print[35],n;

int LIS_n_logk()
{
    int length=0;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int left=0,right=length,mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(I[mid]<data[i])
                left=mid+1;
            else
                right=mid-1;
        }
        I[left]=data[i];
        L[i]=left;
        ans=max(ans,L[i]);
        if(left>length)
            length++;
    }
    return ans;
}

void print_LIS(int max_LIS)
{
    int nn=max_LIS;
    int top,i;
    for(i=n; i>0; i--)
        if(L[i]==nn)
        {
            top=data[i];break;
        }
    print[nn-1]=top;
    nn--;
    for(int j=i-1; j>0; j--)
    {
        if(L[j]==nn && data[j]<top)
        {
            print[--nn]=data[j];
            top=data[j];
        }
    }
    for(int i=0; i<max_LIS; i++)
        cout<<print[i]<<" ";
    cout<<endl;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ms(I,inf);
    I[0]=-inf;
    //ms(L,1);
    n=10;
    int len=LIS_n_logk();
    cout<<len<<endl;
    print_LIS(len);
    return 0;
}

/*
#include<iostream>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;


int lis(int arr[], int N)
{   int i;
    set<int> s;  set<int>::iterator k;
    for (i=0; i<N; i++)
    {  if (s.insert(arr[i]).second){
            k = s.find(arr[i]);
               k++;
            if (k!=s.end()) s.erase(k);  }}
    return s.size(); }
int main()  {
    int arr[] = {8, 9, 12, 10, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << lis(arr, n)<< endl;  }
*/
