#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int g_count=0;

        for(int i=0;i<n-1;i++){
            int num=arr[i];
            int temp=i;
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[j]%num==0){
                    num=arr[j];
                    i=j+1;
                    count++;
                }
            }
            i=temp;
            if(count<=k){
                if(count>g_count)g_count=count;
            }
        }

        cout<<g_count<<endl;
    }
    

}