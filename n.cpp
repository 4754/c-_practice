#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int total = 0;
    int str[n];
    int id[n];
    for(int i = 0 ; i<n ;i++){
        cin>>str[i];
        total = total + str[i];
    }

    for(int i = 0 ; i<n;i++){
        cin>>id[i];
    }
    int q;
    cin>>q;
    while(q--){
    //	cout <<total<<"\n";
        int a,b;
        cin>>a>>b;
        total = total - str[a-1];
        int key = id[a-1];
        str[a-1] = -1;
        for(int i = 0 ;i<n && b > 0 ;i++){
            if(id[i] == key && i != (a-1) && str[i] != -1){
                total = total - str[i];
                b--;
                str[i] = -1;
            }
        }
        cout<<total<<" ";
        
    }
}
