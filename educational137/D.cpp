#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int c=0;
    while(c<str.size() && str[c]=='0'){
        c++;
    }
    if(c==str.size()){
        cout<<"0"<<endl;
    }
    int k;
    string s=str.substr(c);
    for(k=0; k<s.size(); k++){
        if(s[k]=='0'){
            break;
        }
    }
    // if(k==s.size()){
    //     k--;
    // }
    vector<string> ans;
    ans.push_back(s);
    for(int i=1; i<=k; i++){
        string a="";
        for(int j=0; j<s.size(); j++){
            if(j-i>=0){
                a+=max(s[j], s[j-i]);
            }
            else{
                a+=s[j];
            }
        }
        ans.push_back(a);
    }
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<endl;
    // }
    sort(ans.begin(), ans.end());
    cout<<ans[ans.size()-1]<<endl;
    // reverse(ans.begin(), ans.end());
    
    // cout<<ans[0];
}