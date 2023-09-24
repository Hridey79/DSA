#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long arr[n];

        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }

        long long left=0,right=INT_MAX;
        long long ans=INT_MAX;

        while(left<=right){
            long long mid=(right-left)/2 +left;
            long long res=0;
            for(long long &a:arr){
                if(mid>a){
                    res+=mid-a;
                }

            }
            if(res<=x){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;        
            }
        }

        cout<<ans<<endl;
    }
}