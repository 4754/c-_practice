#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y; // x = row , y = column
        cin >> x >> y;

        if(x==y){
            long long out = 1;
            out = x*x - (x-1);
            cout << out <<"\n";

        } else if(x>y){
            long long out = 1;
            out = x*x - (x-1);
            if(x&1){
                 out = out - (x-y);
             cout<<out<<"\n";
            } else{
                out = out + (x-y);
                cout<<out<<"\n";
            }
           
        } else if(y>x){
            long long out = 1;
            out = y*y - (y-1);
            if(y&1){
                out = out - (x-y);
                cout<<out<<"\n";
            } else{
                out = out + (x-y);
                cout<<out<<"\n";
            }
        }
    }
}