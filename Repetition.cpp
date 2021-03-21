#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    long long l = str.size();
    long long rep = 1;
    char ch = str[0];
    long long result = 1;
    for(int i = 1 ; i<l;i++){

        if(str[i] == ch){
            rep++;
        } else{
            ch = str[i];
            result = max(result,rep);
            rep=1;
        }
    }
    result = max(result,rep);
    cout<<result;

}