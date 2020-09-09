    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int l=0,r=0,u=0,d=0;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='D')
            {
                d++;
            }
        }
        cout<<2*(min(l,r)+min(u,d))<<endl;
    }
