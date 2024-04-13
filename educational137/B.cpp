#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<2<<" "<<1<<endl;
        }
        else if(n>2){
            cout<<1<<" "<<n<<" ";
            for(int i=2; i<=n-1; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}