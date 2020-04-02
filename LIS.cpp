/*
#include<bits/stdc++.h>
using namespace std;


int lis( int arr[], int n )
{
    int lis[n];

    lis[0] = 1;

    for (int i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
               // printf("^^%d\n",arr[j]);
                printf("...%d...\n",lis[i]);
    }

    // Return maximum value in lis[]
    return *max_element(lis, lis+n);
}


int main()
{
    int arr[] = { 3, 2, 6, 4, 5,1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n", lis( arr, n ) );
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int arr[1001] , lis[1001];
int mx;
void LIS (int n)
{

        lis[0] = 1;


    for(int i = 1; i < n; i++)
    {
    lis[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }


    for(int i = 0; i < n; i++)
    {
        if(mx < lis[i])
            mx =lis[i];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mx = -1;
    LIS(n);
    printf("%d\n",mx);
}
