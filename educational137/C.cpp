#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;string s;
        cin>>s;
        vector<int> v(n);
        for(int i=0 ;i<n ;i++){
            cin>>v[i];
        }
        ll ans=0;
        int curr=0;
        for(int i=0; i<n ;i++){
            if(s[i]=='0'){
                curr=v[i];
            }
            else{
                if(curr>v[i]){
                    ans+=curr;
                    curr=v[i];
                }
                else{
                    ans+=v[i];
                }
            }
        }
        cout<<ans<<endl;
    }
}