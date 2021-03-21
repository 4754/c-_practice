#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<1<<" ";
    } else if(n == 4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    } else{

        if(n&1){
            int l = n;
            n--;
            while(n>=2){
                cout<<n<<" ";
                n=n-2;
            }
            while(l>=1){
                cout<<l<<" ";
                l=l-2;
            }
        } else{
            int l = n; //odd 8
             while(n>=2){
                cout<<n<<" ";
                n=n-2;
             }
             l--;
             while(l>=1){
                 cout<<l<<" ";
                 l=l-2;
             }

        }

    }
}