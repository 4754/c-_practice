#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long i = 5;
    long long res = 0;
    while(n/i > 0){
        res = res + n/i;
        i=i*5;
    }
    cout<<res;
}