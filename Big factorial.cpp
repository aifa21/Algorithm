#include <bits/stdc++.h>
using namespace std;
int f[8000][10000];
int ar[1000008];
int fr[100000];
int vis[100000];
void fun()
{
    f[0][0] = 1;
    f[1][0] = 1;

    for(int i = 2; i < 8000; i++)




    {
        for(int j = 0; j < 10000; j++)
        {

            f[i][j] = f[i][j] + f[i - 1][j] * i;

          // cout<<"f["<<i<<"]["<<j<<"]=   "<<f[i][j]<<endl;
           //cout<<endl;

            if(f[i][j] > 9)


            {
               // cout<<"greater than 9"<<endl;

                f[i][j + 1] = f[i][j] / 10;

               // cout<<"**f["<<i<<"]["<<j+1<<"]=   "<<f[i][j+1]<<endl;
               // cout<<endl;

                f[i][j] %= 10;


                     //
                   //  cout<<"**f["<<i<<"]["<<j<<"]=   "<<f[i][j]<<endl;

            }
        }
    }

}
int main()
{
   fun();
   int n,temp;
   //memset(fr,0,sizeof fr);
   memset(vis,0,sizeof vis);
   while(cin >> n)
   {
       memset(fr,0,sizeof fr);
       if(n==0)
        break;
       int cnt;

       for(cnt = 10000- 1; cnt >= 0; cnt--)
       {
           if(f[n][cnt] != 0)
            break;
       }
  int c=0;
       for(int i = cnt; i >= 0; i--)
       {
               fr[f[n][i]]++;
               //vis[f[n][i]]=1;

       }
     printf("%d! --\n", n);
        for(int i = 0; i <=4; i++) {
            if(i)
                printf("    ");
            else
                printf("   ");
            printf("(%d)%5d", i, fr[i]);
        }
    cout<<endl;
        for(int i = 5; i <=9; i++) {
            if(i != 5)
                printf("    ");
            else
                printf("   ");
            printf("(%d)%5d", i,fr[i]);
        }
        cout<<endl;


   }


}




