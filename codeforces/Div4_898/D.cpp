#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin >>s;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                ans++;
                for(int j=1;j<k;j++){
                    if(i+1<n){
                        s[i]=='W';
                        i++;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

}