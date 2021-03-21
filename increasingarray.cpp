#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    long long ans = 0;
    long long check;
    cin>>check;
    for(long long i=1;i<n;i++){
        long long m;
        cin>>m;

        if(m < check){
            while(m<check){
                m++;
                ans++;
            }
        } else{
            check = m;
        }
        
    }
    cout<<ans;
}