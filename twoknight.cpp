#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i;
    cin>>i;
    for(long long n = 1;n<= i ;n++){
        long long p = n*n*(n*n-1)/2;
        long long q = 4*(n-1)*(n-2);
        p = p-q;
        cout<<p<<"\n";
        //n--;
    }
}