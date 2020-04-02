#include <bits/stdc++.h>
using namespace std;
int hist[100005];

int rectangle (int n)
{
    stack <int> st;
    int i = 0;
    int mx = 0;
    int area= 0;
    while(i < n)
    {
        if(st.empty() || hist[st.top()] <= hist[i]){

            st.push(i++);
       // cout<<"i= "<<i<<endl;

        }
        else
        {
            int top = st.top();
           // cout<<"..TOP.."<<top<<endl;
            st.pop();

            if(st.size() > 0)
            {
                area = hist[top] * (i - st.top() -1);
                //cout<<"....large..."<<area<<endl;
            }
            else
            {
                area = hist[top] * i;
               // cout<<"..Large==="<<area<<endl;
            }
            mx = max(mx, area);
        }
    }

   while(st.size() > 0)
    {
        int top = st.top();
        st.pop();
         if(st.size() > 0)
            {
                area = hist[top] * (i - st.top() -1);
            }
            else
            {
                area = hist[top] * i;
                 //cout<<".!!!.Large==="<<area<<endl;
            }
            mx = max(mx, area);
    }
    return mx;
}
int main()
{
    int n;
    int t,o=0;
    scanf("%d",&t);

    while(t--)
    {
        o++;
        scanf("%d",&n);

        for(int i = 0; i < n; i++)
            {
                scanf("%d",&hist[i]);
            }
        int ans=  rectangle(n);

        printf("Case %d: %d\n", o, ans);
    }
}
/*
2
5
2 1 2 3 1
*/







