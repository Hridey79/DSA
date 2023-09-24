#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int smallest=INT_MAX;

        for(int i=0;i<n;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        int prod=1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==smallest && flag){
                flag=false;
                arr[i]++;
            }
            prod*=arr[i];
        }

        cout<<prod<<endl;
    }

    return 0;
}