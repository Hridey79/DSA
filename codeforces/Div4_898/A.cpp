#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="abc";
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;

        if(s==a){
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0;i<3;i++){
            if(s[i]!=a[i])count++;
        }

        if(count==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}