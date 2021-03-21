#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    long long M = 1000000007;
    long long sum = 1LL;
    for(long long i = 1 ;i<= n ;i++){
        sum = (sum*2)%M;
    }
    cout<<sum;

}

