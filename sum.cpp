    #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int val=n+1;
        int sm=0;
        for(int i=0;i<n;i++)
        {
         sm=a[i];
            if(sm>x)
            {
                cout<<1<<endl;
            }
            else{
                for(int j=i+1;j<n;j++)
                {
                    sm=sm+a[j];
                    if(sm>=x && (j-i+1)<val)
                    {
                        val=j-i+1;
                    }
                    cout<<sm<<" "<<val<<endl;
                }

            }
        }
        cout<<val<<endl;
    }
}
