#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long  x;
    cin>>x;
    while(x--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if((b-a)%((c+d)) ==0){
            cout<<((b-a))/((d+c))<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}









