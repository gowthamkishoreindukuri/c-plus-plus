    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            string res;
            for(int i=0;i<n-3;i+=4)
            {
                int val = ((int)s[i+0]-'0')*pow(2,3)+((int)s[i+1]-'0')*pow(2,2)+((int)s[i+2]-'0')*pow(2,1)+((int)s[i+3]-'0')*pow(2,0);
                //cout<<((int)s[i])<<endl;
                char tmp = 'a'+val;
                res+= tmp;
            }
            cout<<res<<endl;
        }
    }
