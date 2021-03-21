#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l = n+1;
    cin>>n;
    vector<bool> check(n+1,0);
    while((n-1)!=0){
        int a;
        cin >>a;
        check[a] = 1;
        n--;
    }

    for(int i = 1 ; i<l;i++){
        if(check[i] == 0){
            cout<<i;
            break;
        }
    }
    return 0;
}