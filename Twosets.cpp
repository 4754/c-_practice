#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long n1 = n;

    long long sum = n*(n+1)/2;

    if(sum&1){
        cout<<"NO";
    } else{
        cout<<"YES"<<"\n";
        sum = sum/2;
        long long news = 0;
        vector<long long> v;
        while(news < sum){
            v.push_back(n);
            news = news + n--;
        }
        if(news > sum){
            news = news - ++n;
            v.pop_back();
        }
        long long diff = sum - news;
       // cout<<"diff : "<<diff<<"\n";
        if(diff > 0){
            news = news + diff;
            v.push_back(diff);
        }
        long long lent = v.size();
        cout<<lent<<"\n";
        for(long long i = 0 ; i<lent;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        cout<<(n1-lent)<<"\n";
        long long iter=0;
        iter = n1 - lent;
        if(diff>0) iter++;
        for(long long i = 1; i<= iter ;i++){
            if(i!=diff){
                cout<<i<<" ";
            }
        }

    }
return 0;
}