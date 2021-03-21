#include<bits/stdc++.h>
using namespace std;
bool cmp(auto &a,auto &b){
    return a.first < b.first;
}

int main(){
    map<string,int> m;
    m["gaurav"] = 1;
    m["saurav"] = 2;
    m["Guddi"] = 3;

    sort(m.begin(),m.end(),cmp);
    for(auto e : m){
        cout<<e.first<<e.second<<"\n";
    }
}