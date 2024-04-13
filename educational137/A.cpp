#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n ;i++){
            cin>>v[i];
        }
        // int c=0;
        int cnt=10-n;
        cout<<(cnt*(cnt-1)*6)/2<<endl;
    }
}